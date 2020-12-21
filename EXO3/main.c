#include <stdio.h>
#include <conio.h>

int main() {
	char nom[20];
	char prenom[20];
	char cSexe = 0;
	printf("Entre votre prenom:\n");
	scanf_s("%s", prenom, 20);
	printf("Entre votre nom\n");
	scanf_s("%s", nom, 20);
	printf("Entre votre sexe, [H]omme ou [F]emme ?");
	cSexe = _getch();

	if (cSexe == 'H') {
		char sexe[] = "Monsieur";
		printf("`\n%s %s %s", sexe, prenom, nom);
	}
	else if (cSexe == 'F') {
		char sexe[] = "Madame";
		printf("\n%s %s %s", sexe, prenom, nom);
	}
}