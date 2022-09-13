	#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int isPrime(int number){
	int i;
		for(i=2;i<number/2;i++){

	if(number%i==0){
		return 0;
	}
}
	return 1 ;
}
int main(){
	int nb,number,ok;
	printf("entrer un nombre: ");
	scanf("%d",&nb);
	for(number=2;number<=nb;number++){
	 if (isPrime(number)){
	 	printf("%d is prime \n",number);
	 }
}
}
