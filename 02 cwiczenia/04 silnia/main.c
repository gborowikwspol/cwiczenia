#include <stdio.h>

int main() {

    unsigned long int podstawa_silni;
    unsigned long int licznik;
    unsigned long int wynik = 1;

    printf("Podaj wartosc calkowita dla ktorej mam obliczyc silnie, n = ");
    scanf(" %ld", &podstawa_silni);

    if (podstawa_silni <= 15) {

        for (licznik = 2; licznik <= podstawa_silni; licznik++) {
            wynik *= licznik;
        }

        printf("\nSilnia wynosi: %ld\n", wynik);

    } else {
        printf("Za duza wartosc n, n <= 15");
    }

    return 0;
}
