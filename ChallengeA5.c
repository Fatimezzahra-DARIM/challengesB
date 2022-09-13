#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
	const int mois=12;
	const int jours=365;
	const int heures=8760;
	const int minutes=525600;
	const int secondes=3.15*pow(10,7);
	int annee;
	int choix;
	printf("entrer le nombre d'annee:");
	scanf("%d",&annee);
	
	printf ("1: Mois\n");
		printf ("2: Jours\n");
			printf ("3: Heures\n");
				printf ("4:Minutes\n");
					printf ("5: Secondes\n");
					printf("entrer le choix:");
	scanf("%d",&choix);
					switch (choix){
						case 1:
							printf("%d",mois*annee);
							break;
							case 2:
							printf("%d",jours*annee);
							break;
							case 3:
							printf("%d",heures*annee);
							break;
							case 4:
							printf("%d",minutes*annee);
							break;
							case 5:
							printf("%d",secondes*annee);
							break;
							default:{
								printf("Faux reponses");
								break;
							}
							
			}
	
}



