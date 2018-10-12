#include <stdbool.h>
#include "stdio.h"

int main() {
    typedef enum { // typedef sluzy do nazwania typu (typ dni)
        ni, po = 5, wt, sr, cz, pi, so
        // mamy wplyw na indeksowanie elementow typu wyliczeniowego
        // uzyteczne np. przy rankingowaniu
    } dni;

    dni dzien_tygodnia;
    bool czy_byl_obecny = false; // typ bool pochodzi
                                 // z biblioteki stdbool.h
                                 // false = 0, true = 1

    dzien_tygodnia = so;
    printf("%i\n", dzien_tygodnia);

    printf("%i\n", czy_byl_obecny);
}
