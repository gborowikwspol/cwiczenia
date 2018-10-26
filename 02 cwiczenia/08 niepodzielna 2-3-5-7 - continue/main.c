#include <stdio.h>

int main() {
    int liczba;
    int licznik_petli = 0;

    printf("Program podaje wszystkie liczby mniejsze od\n");
    printf("liczby podanej przez użytkownika, które\n");
    printf("są niepodzielna przez 2, 3, 5, 7.\n\n");
    printf("Podaj liczbę: ");
    scanf(" %d", &liczba);

    // zrób nieparzystą
    if (!(liczba % 2)) --liczba;

    for (; liczba > 0; liczba -= 2) {
        licznik_petli++;
        
//        if (!(liczba % 3) || !(liczba % 5) || !(liczba % 7)) continue;

        if (!(liczba % 3)) continue;
        if (!(liczba % 5)) continue;
        if (!(liczba % 7)) continue;

        printf("%d ", liczba);
    }

    printf("\n");
    printf("liczba pętli wyniosła: %d\n", licznik_petli);
    return 0;
}
