

//#include <stdio.h>
//int main(){
//int nombre ;
//printf("Entrez un nombre entier pour afficher sa valeur equivalente en octal et en hexadecimal :");
//scanf("%d",&nombre);
//printf("En octal est: %o\n",nombre);
//printf(" En hexadecimal est: %x\n",nombre );
//}
#include<stdio.h>

int main(){
    int i,oc,j,de,n,tmp,mod;
    printf("******************\n");
    printf("Entrer la valeur en octal \n");
    scanf("%d",&oc);
    n=1;
    de=(oc%10);
    while(oc!=0){
      oc/=10;
      mod=oc%10; 
      tmp=mod/8;
      for(i=2;i<=n;i++){ 
       tmp=tmp*8;
      }
      de=de+tmp;
      n++;
    }
    printf("votre nombre en decimal est:%d\n",de);
    printf("votre nombre en hexadecimal:%x\n",de);
    printf("***************\n");
    }
//#include<stdio.h>
//
//int main(){
//    int 
