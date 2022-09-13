#include <stdio.h>
#include <stdlib.h>
int main () {
	float C,F;
	printf("Ecrivez la temperature en Celsius:\n");
	scanf("%f",&C);
	F=(C*1.8)+32;
	printf("la temperature en Fehrenheit est: \n %.2f C= %.2f F",C,F);
}
