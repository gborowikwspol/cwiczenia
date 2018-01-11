#include <stdio.h>

int main(){

	const char ciag_zn[] = "Ala ma kota, a kot ma Ale.";
	int histogram[26] = {0};
	char znak;

	int licznik = 0;
	while( (znak = ciag_zn[licznik]) != 0){
		if((znak >= 'a') && (znak <= 'z')){
			++histogram[znak - 'a'];
		}
		++licznik;
	}

	//alternatywnie petla for zamiat while
//	for(int licznik = 0; ciag_zn[licznik] != 0; ++licznik){

//	}

	//wypisz
	for(int x = 0; x < 26; ++x){
		printf("%c -> %d,\n", 'a' + x, histogram[x]);
	}

	return 0;
}
