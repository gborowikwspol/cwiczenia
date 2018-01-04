#include <stdbool.h>
#include <stdio.h>


bool sprawdz_czy_cyfra(char znak) {
    if (znak >= 48 && znak <= 57) return true;
    else return false;
}

bool sprawdz_czy_sa_cyfry(const int liczba_znakow,
                          const char *tablica,
                          bool sa_cyfry) {
    for (int i = 0; (i < liczba_znakow) && (!sa_cyfry); ++i) {
        if (sprawdz_czy_cyfra(tablica[i])) {
            sa_cyfry = true;
        }
    }
    return sa_cyfry;
}

char *wprowadz_znaki(const int liczba_znakow,
                     const char *tablica) {
    printf("Podaj znaki do analizy.\n");
    for (int i = 0; i < liczba_znakow; ++i) {
        printf("znak %d: ", i);
        scanf(" %c", &tablica[i]);
    }
    return tablica;
}

char znalezienie_cyfry_o_maksymalnej_wartosci(const int liczba_znakow,
                                              const char *tablica,
                                              bool sa_cyfry,
                                              int maksymalna_cyfra) {
    if (sa_cyfry) {
        for (int i = 0; i < liczba_znakow; ++i) {
            if (sprawdz_czy_cyfra(tablica[i])) {
                if (maksymalna_cyfra < tablica[i]) {
                    maksymalna_cyfra = tablica[i];
                }
            }
        }
        printf("\nMaksymalna cyfra: %c", maksymalna_cyfra);
    } else {
        printf("\nW tablicy nie ma cyfr.");
    }
    return maksymalna_cyfra;
}

void wyswietl_tablice(const int liczba_znakow,
                      const char *tablica) {
    printf("Tablica znakow: ");
    for (int i = 0; i < liczba_znakow; ++i) {
        printf("%c", tablica[i]);
    }
}

int main() {
    const int liczba_znakow = 10;
    char tablica[liczba_znakow];
    bool sa_cyfry = false;
    int maksymalna_cyfra = 0;

    wprowadz_znaki(liczba_znakow, tablica);

    wyswietl_tablice(liczba_znakow, tablica);

    sa_cyfry = sprawdz_czy_sa_cyfry(liczba_znakow, tablica, sa_cyfry);

    maksymalna_cyfra = znalezienie_cyfry_o_maksymalnej_wartosci(
            liczba_znakow, tablica, sa_cyfry, maksymalna_cyfra);

    return 0;
}









