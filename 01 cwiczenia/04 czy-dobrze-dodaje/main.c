#include <stdio.h>

int dodaj(int a, int b);

int test_czy_dobrze_dodaje(int arg1, int arg2, int wynik)
{
	if(dodaj(arg1, arg2) == wynik)
	{
		return 1;
	}
	else
	{
		puts("zle argumenty\n");
		printf("%i + %i != %i\n", arg1, arg2, wynik);
		return 0;
	}
}

int dodaj(int a, int b)
{
	return a+b;
}

int main()
{
	test_czy_dobrze_dodaje(3,3,6);
	test_czy_dobrze_dodaje(3,4,6);

	return 0;
}

