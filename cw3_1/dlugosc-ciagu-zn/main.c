#include <stdio.h>
#include <string.h>

int main(){
	char ciag_zn[100] = {"abcdef"};
	int i = 0;

	//petla while
	//while(ciag_zn[i] > 0) i++;

	//alternatywnie for
	for(i = 0; ciag_zn[i] > 0; i++) ;
	printf("Dlugosc ciagu znakow: %d\n", i);

	printf("Dlugosc ciagu znakow (do porownania): %u\n", (unsigned)strlen(ciag_zn));

	return 0;
}
