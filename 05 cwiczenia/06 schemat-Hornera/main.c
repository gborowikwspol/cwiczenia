#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double schemat_klasyczny(int liczba_slow,
                         char *const *tablica_slow) {
    double wynik = 0.0;
    double potega_x = 1.0;
    double x = atof(tablica_slow[1]);

    for (int licznik = 2; licznik < liczba_slow; ++licznik) {
        wynik += potega_x * atof(tablica_slow[licznik]);
        potega_x *= x;
    }
    return wynik;
}

double schemat_Hornera(int liczba_slow,
                         char *const *tablica_slow) {
    double wynik = 0.0;
    double x = atof(tablica_slow[1]);

    for (int licznik = liczba_slow - 1; licznik >= 2; --licznik) {
        wynik = tablica_slow[licznik] * x +
    }

    return wynik;
}

int main(int liczba_slow, char *tablica_slow[]) {

    if (liczba_slow > 2) { //pierwszy parametr to nazwa programu
        printf("Wynik: %lf\n",
               schemat_Hornera(liczba_slow, tablica_slow));
    } else {
        printf("Nie poprawna liczba parametrow!\n");
    }

    return 0;
}


