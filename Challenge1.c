#include <stdio.h>
#include <stdlib.h>
int main () {
	int N;
	char Nom [16];
	char Prenom [16];
	char Sexe [10];
	printf("Information personnelles:\n");
	printf("Ecrivez votre nom:");
	scanf("%s",&Nom);
	printf("Ecrivez votre Prenom:");
	scanf("%s",&Prenom);
	printf("Ecrivez votre age:");
	scanf("%d",&N);
	printf("Ecrivez votre sexe:");
	scanf("%s",&Sexe);
	printf("Ecrivez votre numero de telephone:");
	scanf("%d",&N);
	printf(" Hello %s",Nom);
}
