#include <stdio.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int myTab1[TAILLETAB1];
	int * myPtr1 = &myTab1[TAILLETAB1-1]; // On initialise notre pointeur a la derniére adresse de myTab1

	for (int i=0; i < TAILLETAB1; i++) {
		myTab1[i] = i+1;
		printf("%d%c", myTab1[i], SEPARATEUR);
	}
	printf("\n");
	for (int i = 0; i < TAILLETAB1; i++) {
		printf("%d%c", *myPtr1, SEPARATEUR);
		myPtr1--;
	}
}