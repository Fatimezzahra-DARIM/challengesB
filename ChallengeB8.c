	#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
	float a=-15,b=-10,x,c;
	
	do{
		x=(a+b)/2;
		
		c = (pow(x,3)+(12*pow(x,2))+1) * (pow(a,3)+(12*pow(a,2))+1);
		
		if(c<=0) {
			b = x;
		}else if(c>0) {
			a = x;
			
		}
		
		printf("[%f]\n",x);
	}while(b-a>0.00001);

}

	
		
