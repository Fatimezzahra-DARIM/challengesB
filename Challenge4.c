#include <stdio.h>
#include <stdlib.h>
float M,Mile,Km;
int main() {
	printf("Donner la distance en Mile:");
	scanf("%f",&Mile);
	Km= Mile*1.609;
	M=Km*1000;
	printf("La distance en metre est:%.2f",M);
}
