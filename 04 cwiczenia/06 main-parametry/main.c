#include <stdio.h>
#include <string.h>

int main(int liczba_slow, char* tablica_slow[]){

	char wyjscie[200] = {0};

	printf("Nazwa programu: %s\n", tablica_slow[0]);

	if(liczba_slow != 3 + 1){ //pierwszy parametr to nazwa programu
		printf("Niepoprawna liczba parametrow!");
	}
	else{
		for(int licznik = 1; licznik < liczba_slow; ++licznik){
			strcat(wyjscie, tablica_slow[licznik]);
		}
		printf("%s\n", wyjscie);
	}

	return 0;
}
