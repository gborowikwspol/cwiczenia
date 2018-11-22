#include "stdio.h"

void zamien(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    char ciag[] = "A man a plan a Canal Panama";

    int poczatek = 0;
    int koniec = sizeof(ciag) - 2;

    while (poczatek < koniec)
    {
        zamien(&(ciag[poczatek]), &(ciag[koniec]));
        poczatek++;
        koniec--;
    }

    printf("%s", ciag);

    return 0;
}

