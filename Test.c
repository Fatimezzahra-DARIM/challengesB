#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	int i,nb,number=10;
	int isPrime;
	printf("entrer un nombre: ");
	scanf("%d",&nb);
	for(number=2;number<=nb;number++){
	isPrime=1;
	
	for(i=2;i<number/2;i++){

	if(number%i==0){
			isPrime=0;
    break;
	}
	}
	if(isPrime){
		printf("%d is prime\n",number);
	}
//	else 
//	printf("%d is not prime\n",number);
}
}
