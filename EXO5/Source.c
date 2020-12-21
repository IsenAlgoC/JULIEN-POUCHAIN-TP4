#include <stdio.h>

int main() {
	char string[1024];
	int mots = 0;
	float somme = 0;
	int i = 0;

	gets_s(string, 1024);

	do {
		if (string[i] == 32 || string[i] == '\0') {	// Si on trouve un espace ou une fin de string alors on a un mot en plus
			mots++;
		}
		else {
			somme++;
		}
		i++;
	} while (string[i-1] != '\0'); // Si fin de string alors stop la boucle

	float moyenne = somme / mots;
	printf("La phrase contient %d et la moyenne de lettres par mots et de %.2f", mots, moyenne);
}