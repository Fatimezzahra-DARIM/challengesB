#include <stdio.h>
#include <stdlib.h>
 int main (){
 	int a,b,c;
 	printf("Veuillez entrer un entier de 3 chiffres : \n");
 	scanf("%d",&a);
 	c=a;
 	b=(a%10)*100;
 	a=a/10;
 	b= b+(a%10)*10;
 	a/=10;
 	b+=a;
 	printf("Le nombre %d inverse est :%d \n",c,b);
 }
