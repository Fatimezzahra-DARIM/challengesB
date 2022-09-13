#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i,nbr,somme=0,max=0;
	do{
		printf(" Entrez un nombre:");
		scanf("%d",&nbr);
		if(nbr<100 && nbr>=0 ){
		somme+=nbr;
		if(nbr>max) max=nbr;
		}
		else{ printf(" le numero entre 0 et 100\n");
		}
	}while (nbr!=0);
		printf("La somme est : %d\n",somme);
			printf("Le max est : %d\n",max);
}
	
//	for(i=0;i<nbr;i++)
//	scanf("%d",&Serie[i]);
//	
//while( serie != 0 && serie>0 && serie <= 100)	{
//	printf(" la somme est :");
	

