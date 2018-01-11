#include <stdio.h>

int main()
{
	char napis[16] = "pamolka";

	*(napis + 1) = 'o';
	napis[3] = 'y';

	printf("%s\n", napis);

	return 0;
}
