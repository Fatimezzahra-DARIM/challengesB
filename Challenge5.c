#include <stdio.h>
#include <stdlib.h>
int main () {
	float C,F;
	printf("Ecrivez la temperature en Fahrenheit:\n");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf("la temperature en Celsius est: \n %.2f F= %.2f C \n",F,C);
	if (C>50){
		printf("tres chaud\n");
	}
	else if (C<0){
		printf("tres froid\n");
	}else if (0<C<13){ printf("froid\n");
	}else{
		printf("chaud");
	}
	
	
}
