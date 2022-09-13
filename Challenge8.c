#include <stdio.h>
#include <stdlib.h>
int main () {
	int a,b,c,d,Somme;
	float Moyenne;
	printf("Entrer le nombre a :");
	scanf("%d",&a);
	printf("Entrer le nombre b :");
	scanf("%d",&b);
		printf("Entrer le nombre c :");
	scanf("%d",&c);
		printf("Entrer le nombre d :");
	scanf("%d",&d);
	Somme=a+b+c+d;
	Moyenne=(float)Somme/4;
		printf("La somme est:%d\n",Somme);
			printf("La moyenne est:%.2f\n",Moyenne);
		
}
	


