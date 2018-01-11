#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DOKLADNOSC 50

int main(int liczba_slow, char* tablica_slow[]){
	double x;
	double wynik = 1.0;
	double silnia = 1.0;
	double potega_x = 1.0;

	if(liczba_slow == 2){ //pierwszy parametr to nazwa programu
		x = atof(tablica_slow[1]);
		for(int licznik = 1; licznik < DOKLADNOSC; ++licznik){
			potega_x *= x;
			silnia *= licznik;
			wynik += potega_x / silnia;
		}
		printf("Wynik: %lf\n", wynik);
	}else{
		printf("Nie poprawna liczba parametrow!\n");
	}

	return 0;
}
