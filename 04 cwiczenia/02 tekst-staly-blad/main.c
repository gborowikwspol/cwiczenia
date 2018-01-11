#include <stdio.h>

int main()
{
	char *napis = "waniki.";

	*(napis + 1) = 'y';

	printf("%s\n", napis);

	return 0;
}
