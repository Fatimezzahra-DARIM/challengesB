#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){

int myNumber,i,p;
bool isPrime;
printf("\n Enter a number:\n");
scanf("%d",&myNumber);
printf("les nombres premiers inferieurs a %d sont:\n",myNumber);

for(p=2;p<=myNumber;p++){ 
   isPrime=true;
    for(i=2; i<p;i++){

      if(p%i==0)
	  {
	  isPrime=false;
	  
	  break;}

            
			}
			if( isPrime){ 
			   
			printf("%d\t",p);
    }	
}
}

