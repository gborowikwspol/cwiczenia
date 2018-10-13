#include <stdio.h>

int mnoz(int a, int b) {
    printf("Wynik mnozenia: %i\n", a * b);
    return a * b;
}

int dodaj(int a, int b) {
    printf("Wynik dodawania: %i\n", a + b);
    return a + b;
}

int odejmij(int a, int b) {
    printf("Wynik odejmowania: %i\n", a - b);
    return a - b;
}

int dziel(int a, int b) {
    printf("Wynik dzielenia: %i i reszta: %i\n", a / b, a % b);
    return a / b;
}

int czy_powtorzyc(int *czy_dalej) {
    printf("Czy dalej chcesz liczyc? (1 - tak / 0 - nie) ");
    scanf("%d", czy_dalej);
    return (*czy_dalej);
}

void wczytaj_wartosci(int *a, int *b, char *wybor) {
    printf("Podaj wartosc argumentu a: ");
    scanf("%i", a);
    printf("Podaj dzialanie: ");
    scanf(" %c", wybor);
    printf("Podaj wartosc argumentu b: ");
    scanf("%i", b);
}

int licz(int a, int b, char wybor) {
    switch (wybor) {
        case '+':
            dodaj(a, b);
            break;
        case '-':
            odejmij(a, b);
            break;
        case '*':
            mnoz(a, b);
            break;
        case '/':
            dziel(a, b);
            break;
        default:
            puts("Nie znam dzialania!");
            return 0;

    }

    return 1;
}

int main(void) {
    int a, b;
    char wybor;
    int czy_dalej = 1;

    printf("Program kalkulator.\n");

    while (czy_dalej == 1) {
        wczytaj_wartosci(&a, &b, &wybor);

        licz(a, b, wybor);

        czy_dalej = czy_powtorzyc(&czy_dalej);
    }
    return 0;
}



