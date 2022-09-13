#include <stdio.h>
#include <stdlib.h>
int main(){
	int l,i,n;
	printf("Veuillez entrer le nombre de lignes:\n");
	scanf("%d",&l);
	printf("******** Pyramide d'etoile *********'\n");
	
	for(i=1;i<l;i+=2){
     for (n=1;n<=l-i;n++){	
	 printf(" ");
	 }
	 for (n=1;n<=i;n++){	
	 printf(" *");
	 }
    	
  printf("\n");
		}
		return 0;	
		}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int i, j=0, s, ligne;
//  
//    printf("Entrez le nombre de lignes: ");
//    scanf("%d",&ligne);
//  
//    for(i=1; i<=ligne; ++i, j=0)
//    {
//        for(s=1; s<=ligne-i; ++s)
//        {
//            printf("  ");
//        }
//        while(j != 2*i-1)
//        {
//            printf("* ");
//            ++j;
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
