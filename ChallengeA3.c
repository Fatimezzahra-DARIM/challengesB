#include <stdio.h>
#include <stdlib.h>

int main() {
	int A,B ;
	printf("Veuillez entrer le 1er nombre : A=");
	scanf("%d",&A);
	printf("Veuillez entrer le 2eme nombre : B=");
	scanf("%d",&B);
	if (A!=B){ printf("la somme de deux nombres est: %d+%d=%d",A,B,A+B);
	}else 
	{ 
	printf("la somme de deux nombres est: (%d+%d)=%d\n",A,B,A+B);
	printf("Le triple de leur somme est:%d*3=%d",A+B,(A+B)*3);
	
	}
	return 0;
}
