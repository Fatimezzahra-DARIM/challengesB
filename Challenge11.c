#include <stdio.h>
#include <stdlib.h>
 int main (){
 	float L,l,C;
 	printf("Veuillez entrer la longueur du rectangle : ");
 	scanf("%f",&L);
 	printf("Veuillez entrer la largeur du rectangle : ");
 	scanf("%f",&l);
 	
 	C=2*(L+l);
 	printf("La circonference du rectangle est:%.2f",C);
 	return 0;
 }
