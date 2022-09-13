#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n,inverse=0;
	printf(" Veuillez entrer un nombre entier:\n");
	scanf("%d",&n);
	do{
	inverse=(inverse*10)+(n%10);
	n=n/10;}
	while(n!=0);{
	printf("L'inverse est :%d",inverse);
	}
	return 0;
}
	
