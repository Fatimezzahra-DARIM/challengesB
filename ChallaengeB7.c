#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	int N1=0,N2=1,N3,i,n; 
	printf("Veuillez entrer le nombre :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
			printf("le nieme terme de la suite de Fibonacci:%d\n",N1);
		N3=N1+N2;
		N1=N2;
		N2=N3;
	
	}
}
