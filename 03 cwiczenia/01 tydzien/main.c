#include <stdio.h>
#include <string.h>

int main() {

    char *tydzien[] = {"poniedzialek", "wtorek", "sro",
                       "czw", "pia", "sobota", "niedziela"};

    int rozmiar = sizeof(tydzien) / sizeof(tydzien[0]);

    int i, dlugosc, j;

    for (i = 0; i < rozmiar; ++i) {
        dlugosc = (int) strlen(tydzien[i]);
        for (j = 0; j < dlugosc; ++j) {
            printf("%c  ", tydzien[i][j]);
        }
        printf("\n");
    }

    return 0;
}
