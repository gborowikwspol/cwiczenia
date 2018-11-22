#include <stdio.h>

int main(){
	char ciag_zn[100] = {"Ala ma kota, a kot ma Ale."};
	int dlugosc = 0;

	for(dlugosc = 0; ciag_zn[dlugosc] > 0; ++dlugosc) ;

	for(--dlugosc; dlugosc >= 0; --dlugosc){
		printf("%c", ciag_zn[dlugosc]);
	}
	printf("\n");

	return 0;
}
