#include <stdio.h>
#include <stdlib.h>
int main () {
	float C,F;
	printf("Ecrivez la temperature en Fehrenheit :\n");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf("la temperature en  Celsius est: \n %.2f F= %.2f C",F,C);
}
