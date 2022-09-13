#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
 	float Xm,Ym,Xn,Yn;
 	float MN;
 	printf("Veuillez entrer la cordonnee X de M: ");
 	scanf("%f",&Xm);
 	printf("Veuillez entrer la cordonnee Y de M: ");
 	scanf("%f",&Ym);
 	printf("Veuillez entrer la cordonnee X de N: ");
 	scanf("%f",&Xn);
 	printf("Veuillez entrer la cordonnee Y de N: ");
 	scanf("%f",&Yn);
 	
 	MN=sqrt(pow((Xn-Xm),2)+pow((Yn-Ym),2));
 	printf("La distance MN est: %.2f",MN);
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//double sqr(double a) {
//    return a*a;
//}
// 
//double Distance(double x1, double y1, double x2, double y2) {
//    return sqrt(sqr(y2 - y1) + sqr(x2 - x1));
//}
// 
//int main()
//{
//    printf("Calcul la distance entre deux points (0,0)-(10,10): %f\n",Distance(0, 0, 10, 10));
//    printf("Calcul la distance entre deux points (2,2)-(10,10): %f\n",Distance(2, 2, 10, 10));
//    printf("Calcul la distance entre deux points (1,1)-(8,8): %f\n",Distance(1, 1, 8, 8));
//    return 0;
//}
