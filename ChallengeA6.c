#include <stdio.h>
#include <math.h>

int main() {
	int a ;
	printf("Veuillez saisir le nombre: \n");
	scanf("%d",&a);
	
	if(a<0){
	
	printf("le nombre est negatif");}
	else if (delta==0){ 
		x=(-b)/(2*a);
		printf("La solution est: %.2f",x);
	}
	else {
		x1=(-b - sqrt(delta))/(2*a);
		x2=(-b + sqrt(delta))/(2*a);
		printf ("Les solutions sont : %.2f et %.2f",x1,x2);
	}
	return 0;
}
