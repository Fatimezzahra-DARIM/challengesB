#include <stdio.h>
#include <stdlib.h>
int main(){
    int M,i,n;
    printf("Donner un nombre:\n");
    scanf("%d",&n);
    printf("Sa table de multiplication est :\n");
    for(i=1;i<=10;i++){
    	M=n*i;
    	printf("%d*%d=%d\n",n,i,M);
	}
}
