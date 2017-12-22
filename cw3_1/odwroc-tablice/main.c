#include <stdio.h>

int liczba_elem(char* tab){
	int dlugosc;
	//for(dlugosc = 0; tab[dlugosc] > 0; ++dlugosc) ;
	//alternatywnie
	for(dlugosc = 0; *(tab + dlugosc) > 0; ++dlugosc) ;
	return dlugosc;
}

void zamien(char *znak1, char *znak2){
	char pomocnicza;

	pomocnicza = *znak1;
	*znak1 = *znak2;
	*znak2 = pomocnicza;
}

void odwroc(char* tab, int poczatek, int koniec){
        while(poczatek < koniec){
                zamien(&tab[poczatek], &tab[koniec]);
                ++poczatek;
                --koniec;
        }
}

int main(){
	char ciag_zn[100];
	int dlugosc;
	int poczatek = 0;

	printf("Podaj ciag znakow: "); scanf(" %[^\n]s", ciag_zn);
	printf("%s\n", ciag_zn);

	dlugosc = liczba_elem(ciag_zn);

	odwroc(ciag_zn, poczatek, dlugosc - 1);

	printf("%s\n", ciag_zn);

	return 0;
}
