#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char string[20];
    char string2[20];
    int i = 0;
    int cond = 0;

    printf("Entrez un mot pour lequel vous voulez faire le test du palindrome (sans accents):\n");
    scanf_s("%s", &string, 20);
    for (i; string[i] != '\0'; i++) { // Avec cette boucle on compte tout les char du string, tout en verifiant qu'ils rentrent bien dans nos critéres 
        string[i] = tolower(string[i]);     //tolower() passe tout les caractéres majuscule en minuscule.
        if (string[i] < 97 || string[i] > 122) {
            printf("\nErreur! Ce programme ne prend pas les accents et autres caracteres speciaux !\n");
            return -1;
        }
    }

    for (int n = 0; n < i; n++) {           // string2[] deviens string[] inversé
        string2[n] = string[(i - 1) - n];
    }
    string2[i] = '\0'; // On rajoute la balise de fin de string.

    for (int n = 0; n < i; n++) {
        if (string2[n] != string[n]) {  // On verifie si chaque char est pareil, si un caractére n'est pas pareil alors on met cond = 1
            cond = 1;
        }
    }

    if (cond == 0) {   // Palindrome==true uniquement si cond==0
        printf("Ce mot est un palindrome.");
    }
    else {
        printf("Ce mot n'est pas un palindrome.");
    }

    return 0;
}