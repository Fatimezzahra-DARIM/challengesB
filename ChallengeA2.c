#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char C;
	printf(" Entrer un caractere:");
	scanf("%c",&C);
	switch (C){
		case'a': case'e':case'i':
			case'o':case'u':case'y':
				printf("le caractere est un voyelle");
				break;
				case'b':case'c':case'd':case'f':
					case'g':case'h':case'j':case'k':
						case'l':case'm':case'n':case'p':
							case'q':case'r':case's':case't':
								case'v':case'w':case'x':case'z':
				printf("le caractere est un consonne");
				break;
				default:
				printf("Pas une lettre");
				break;					
	}
	return 0;
}
