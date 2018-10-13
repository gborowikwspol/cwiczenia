#include "stdio.h"

int main() {
    int ile_a = 0, ile_b = 0, ile_xy = 0, nieznany = 0;
     char zn;

    zn = getchar();
    switch (zn) {
        case 'a' :
            ++ile_a;
            break;
        case 'b' :
            ++ile_b;
            break;
        case 'x' :
        case 'y' :
            ++ile_xy;
            break;
        default:
            ++nieznany;
    }

    printf("a: %i, b: %i, xy: %i, inny: %i",
           ile_a, ile_b, ile_xy, nieznany);

    return 0;
}