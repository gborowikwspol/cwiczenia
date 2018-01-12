#include <stdio.h>
#include <stdbool.h>

#define N 11

int main(){
	int tab_sort[N] = {1, 2, 4, 6, 8, 10, 13, 15, 17, 20, 21};

	int poczatek = 0;
	int koniec = N - 1;
	int srodek;
	int szukana = 21;
	bool znalazlem = false;

	while(znalazlem != true && poczatek <= koniec){
		srodek = (poczatek + koniec) / 2;
		if (tab_sort[srodek] == szukana){
			znalazlem = true;
		}else{
			if(tab_sort[srodek] > szukana){
				koniec = srodek - 1;
			}else{ // '<'
				poczatek = srodek + 1;
			}
		}
	}

	if(znalazlem == true){
		printf("Znalazlem. Indeks: %d\n", srodek);
	}else{
		printf("Element nie istnieje w tablicy.\n");
	}

	return 0;
}
