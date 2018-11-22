#include <stdio.h>

int NWD(int a, int b) {
    do {
        a < b ? b -= a : (a -= b);
    } while (a != b);
    return a;
}

int main() {
    int a, b;

    printf("Najmniejsza wspolna wielokrotnosc.\n");
    printf("Podaj a: "); scanf("%d", &a);
    printf("Podaj b: "); scanf("%d", &b);

    printf("Wynik: %d\n", a * b / NWD(a, b));

    return 0;
}

