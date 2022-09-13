#include <stdio.h>
#include <stdlib.h>
float M,Mile;
int main() {
	printf("Donner la distance en M:");
	scanf("%f",&M);
	M=M/1000;
	Mile= M*1.609;
//	M=Km
	printf("La distance en Mile est:%.2f",Mile);
}
