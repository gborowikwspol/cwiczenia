#include <stdio.h> /* dolaczenie biblioteki standardowej input-output */
/* y = f(x) */
/*     f() => 0 */
int main() /* funkcja glowna programu */
/* int -> typ zwracanej wartosci (int - wartosc calkowita) */
{
	puts("Pierwszy program"); /* puts - funkcja z biblioteki standardowej*/
				  /* puts -> put string */
				  /* wyswietlajaca ciag znakow */
				  /* automatycznie przechodzi do nowej lini */
	putchar('g');
	putchar('\n'); /*znak konca lini*/
	putchar('\t'); /*tabulator*/ 
/*	putchar('\r');*/ /*powrot karetki - kursor powraca na poczatek lini*/
	putchar('\\'); /*wypisuje \ */
	return 0;
} /* klamry oznaczaja blok programu, zwykle cialo funkcji */
