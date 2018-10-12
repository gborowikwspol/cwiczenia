#include <stdio.h>

int main() {
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;
    char ciag_znakow[256];

    //formatowane wyjście
    char opcja = 'X';
     char napis[] = "Opis programu.";
    printf("Wybrano opcję %c : %31s", opcja, napis);

    printf("\n");

    printf("Podaj znak: ");
    scanf("%c", &znak);

    printf("Podaj ciąg znakowy: ");
    scanf("%s", ciag_znakow);
    // scanf("%s", &ciag_znakow[0]); // alternatywnie

    printf("Podaj liczbę całkowitą: ");
    scanf("%i", &wartosc_calkowita);

    printf("Podaj liczbę wymierną: ");
    scanf("%lf", &wartosc_wymierna);

    printf("\n");
    printf("znak = %c,\nciąg znakowy = %s,\n"
                   "liczba całkowita = %i,\nliczba wymierna = %lf",
           znak,
           ciag_znakow,
           wartosc_calkowita,
           wartosc_wymierna
    );

    return 0;
}
