#include <stdio.h>

int main(){
	int a, b, wynik = 0;

	printf("Podaj a = "); scanf("%d", &a);
	printf("Podaj b = "); scanf("%d", &b);

	for(int i = 0; i < b; ++i){
		wynik += a;
	}

	printf("Wynik: %d\n", wynik);

	return 0;
}
