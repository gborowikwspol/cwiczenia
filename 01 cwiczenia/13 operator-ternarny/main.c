#include <stdio.h>

int main() {
    int a = 7;
    int b = 3;
    int max, min;

    max = a > b ? a : b;

    printf("maksimum: %i\n", max);

    min = a < b ? a : b;

    printf("minimum: %i\n", min);

    return 0;
}
