#include <stdio.h>

int mnozenie_iteracyjne(int x, int y) {
    int z = 0;

    for (int i = 1; i <= y; ++i) {
        z += x;
    }

    return z;
}

int mnozenie_rekurencyjne(int x, int y) {
    if (y == 1) {
        return x;
    } else {
        return x + mnozenie_rekurencyjne(x, y - 1);
    }
}

int mnozenie_rekurencyjne_operator(int x, int y) {
    return (y == 1) ? x : x + mnozenie_rekurencyjne_operator(x, y - 1);
}

int main() {
    int a = 4, b = 7, wynik;

    wynik = mnozenie_rekurencyjne_operator(a, b);

    printf("%d * %d = %d\n", a, b, wynik);

    return 0;
}
