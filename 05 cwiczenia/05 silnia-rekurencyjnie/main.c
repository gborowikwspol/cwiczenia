#include <stdio.h>

unsigned long silnia_iteracyjnie(unsigned long podstawa_silni) {
    unsigned long int wynik = 1;
    for (unsigned long int licznik = 2; licznik <= podstawa_silni; licznik++) {
        wynik *= licznik;
    }
    return wynik;
}

unsigned long silnia_rekurencyjnie(unsigned long podstawa_silni) {
    if (podstawa_silni == 1) {
        return 1;
    } else {
        return podstawa_silni * silnia_rekurencyjnie(podstawa_silni - 1);
    }
}

unsigned long silnia_rekurencyjnie_operator(unsigned long podstawa_silni) {
    return (podstawa_silni == 1) ?
           1 : podstawa_silni * silnia_rekurencyjnie_operator(podstawa_silni - 1);
}

int main() {
    unsigned long int podstawa_silni;

    printf("Podaj wartosc calkowita dla ktorej mam obliczyc silnie, n = ");
    scanf(" %ld", &podstawa_silni);

    if (podstawa_silni <= 15) {
        printf("\nSilnia wynosi: %ld\n", silnia_rekurencyjnie_operator(podstawa_silni));
    } else {
        printf("Za duza wartosc n, n <= 15");
    }

    return 0;
}


