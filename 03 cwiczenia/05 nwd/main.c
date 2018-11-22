#include <stdio.h>

int main() {
    int a, b;

    printf("Najwiekszy wspolny dzielnik.\n");
    printf("Podaj a: "); scanf("%d", &a);
    printf("Podaj b: "); scanf("%d", &b);

    do {
        a < b ? b -= a : (a -= b);
//      if (a < b) { b -= a; } else { a -= b; }
    } while (a != b);

    printf("Wynik: %d\n", a);

    return 0;
}
