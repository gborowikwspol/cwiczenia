#include "stdio.h"

int main() {
    int a = 4;
    int b = 7;

    printf("%i\n", a++ + b);
    printf("%i\n", ++a + b);

    printf("%i\n", --a + b);
    printf("%i\n", a-- + b);

    return 0;
}