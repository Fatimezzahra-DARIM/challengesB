#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
 	float r,C,pi;
 	printf("Veuillez entrer le rayon d'un cercle: ");
 	scanf("%f",&r);
 	pi=3.14;
 	C=2*pi*r;
 	printf("La circonference de cercle est : %.2f",C);
 }
