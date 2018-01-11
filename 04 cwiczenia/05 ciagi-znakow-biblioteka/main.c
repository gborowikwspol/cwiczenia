#include <stdio.h>
#include <string.h>

// wiecej na
// http://www.cplusplus.com/reference/cstring/

int main()
{
	char ciag1[80];
	char ciag2[80];
	char *tymczasowy;
	int wynik;
	char *c;

	printf("Podaj ciag pierwszy: "); gets(ciag1);
	printf("Podaj ciag drugi: "); gets(ciag2);

	wynik = strcmp(ciag1, ciag2);
	printf("Wynik porownania: %d\n", wynik);

	tymczasowy = strstr(ciag1, ciag2);
	printf("Wynik: %s\n", tymczasowy ? tymczasowy : "nie zawiera");

	tymczasowy = strcat(ciag1, ciag2);
	printf("Wynik polaczenia: %s\n", ciag1);
	printf("Wynik polaczenia: %s\n", tymczasowy);

	return 0;
}
