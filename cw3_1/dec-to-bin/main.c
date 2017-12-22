#include <stdio.h>


int main(){
	int liczba;

	printf("Podaj liczbe do konwersji: ");
	scanf("%d", &liczba);

	printf("Wynik: ");

/*/	do{
              printf("%d ", liczba % 2);
              liczba /= 2;
	}while(liczba > 0);
	printf("\n");
/*/
	if(liczba == 0){
		printf("0\n");
		return 0;
	}

	while(liczba > 0){
		printf("%d ", liczba % 2);
		liczba /= 2;
	}
	printf("\n");
/**/

	return 0;
}
