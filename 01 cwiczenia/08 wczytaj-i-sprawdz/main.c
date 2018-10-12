#include <stdio.h>
int mnoz(int a, int b){	return a * b; }
int dodaj(int a, int b){ return a + b; }
int main(void)
{
	int a = 2, b = 5; /* deklaracja wraz z inicjalizacja */
	char wybor;

	scanf("%c", &wybor); /*czytaj z konsoli i zapisz wartosc pod wybor */

	/* if(wyrazenie) {blok jesli wyrazenie prawdziwe}
	   else {blok jesli wyrazenie falszywe};	 */
	if(wybor == '*'){ /*sprawdzenie czy rowne, to nie jest '=' */
		printf("Wynik mnozenia: %i\n", mnoz(a, b));
	}else{
		printf("Wynik dodawania: %i\n", dodaj(a, b));
	}; /* ten srednik jest opcjonalny jesli wystepuje klamra*/
	return 0;
}
