#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    char* curseur = NULL;
    char tab[100];
    curseur = tab;
    int entree = -1;
    char first = 0;
    char ok = 0;
    srand(time(NULL));

    while (entree < 0 || entree > 20) { // On demande a l'utilisateur jusqu'a ce qu'il nous donne une entr�e entre 0 et 20
        printf("Entrez la valeur recherche (entre 0 et 20) :");
        scanf_s("%d", &entree);
    }


    for (int i = 0; i < 100; i++) { // On remplis tab[] avec des valeurs allant de 0 a 20
        tab[i] = rand() % 21;
        if (tab[i] == entree) { // On ajoute 1 a ok a chaque fois que la valeur tab[i]==entr�e
            ok++;
        }
    }

    if (ok >= 1) {
        printf("La valeur %d a ete trouve en ", entree);
        for (int i = 0; i < 100; i++) {
            curseur++;
            if (*curseur == entree) { // Si la valeur sur la quelle pointe le curseur == entr�e alors:
                if (first == 0) {
                    printf("%d", i); // Si c'est la premi�re alors on print uniquement la valeur,
                }
                else {
                    printf(", puis en %d", i);// sinon on print la valeur avec un bout de phrase pour la coh�rence.
                }
                first++;    // On ajoute 1 a first pour signaler que ce n'est pas la premi�re valeur==entree
            }
        }
        printf(".");
    }
    else {
        printf("La valeur %d n'est pas dans le tableau", entree);
    }

    return EXIT_SUCCESS;
}