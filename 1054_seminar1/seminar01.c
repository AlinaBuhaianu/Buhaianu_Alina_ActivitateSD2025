//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//struct Masina {
//	int id;
//	int anFabricatie;
//	char* sofer; //un sir de caractere
//	float kilometriiParcursi;
//	char initialaProducator; //doar o litera
//};
//
//struct Masina initializare(int id, int anFabricatie, const char* sofer, float kilometriiParcursi, char initialaProducator) {
//	struct Masina m;
//	m.id = 1;
//	m.anFabricatie = anFabricatie;
//	m.sofer = (char*)malloc(strlen(sofer) + 1); //malloc e o functie (pointer la void); +1 sfarsitul de sir de caractere
//	strcpy_s(m.sofer, strlen(sofer) + 1, sofer);
//	m.kilometriiParcursi = kilometriiParcursi;
//	m.initialaProducator = initialaProducator;
//	return m;
//}
//
//void afisare(struct Masina m) {
//	printf("ID : %d \n", m.id);
//	printf("An fabricatie: %d \n", m.anFabricatie);//e functie cu nr variabili de parametrii
//	printf("Sofer: %s \n", m.sofer);
//	printf("Km parcursi: %f \n", m.kilometriiParcursi);
//	printf("Initiala producatorului: %c \n", m.initialaProducator);
//}
//
//void modifica_Sofer(struct Masina* m, const char* nouSofer) {
//	if (strlen(nouSofer) > 2) {
//		if (m->sofer != NULL) {
//			free(m->sofer); //free e functie
//		}
//		m->sofer = (char*)malloc(strlen(nouSofer) + 1);
//		strcpy_s(m->sofer, strlen(nouSofer) + 1, nouSofer);
//	}
//}
//
//void dezalocare(struct Masina* m) {
//	if (m->sofer != NULL) {
//		free(m->sofer);
//		m->sofer = NULL; //pointeaza catre ceva care nu are informatii, dangling pointer
//	}
//}
//
//int main() {
//	struct Masina masina;
//	masina = initializare(1, 2004, "Robert", 2000, 'P'); //metoda primeste pointer la adresa obiectului pe care il apelam
//	//"P" va ocupa 2 octeti, iar pentru 'P', unul
//	afisare(masina);
//	modifica_Sofer(&masina, "Alex");
//	afisare(masina);
//	dezalocare(&masina);
//	afisare(masina);
//	return 0;
//}