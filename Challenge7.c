#include <stdio.h>
#include <stdlib.h>
int main () {
	int a,b;
	printf("Entrer le nombre a :\n");
	scanf("%d",&a);
	printf("Entrer le nombre b :\n");
	scanf("%d",&b);
	printf("l'addition est:%d+%d=%d\n",a,b,a+b);
	printf("La soustraction est:%d-%d=%d\n",a,b,a-b);
	printf("La multiplication est:%d*%d=%d\n",a,b,a*b);
	printf("La division est:%d/%d=%.2f\n",a,b,(float)a/(float)b);
	printf("Le reste de division est:%d %% %d = %d\n",a,b,a%b);
	   }
