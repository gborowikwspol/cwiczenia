#include <stdio.h>
#include "tree.h"


int main(){
    struct Lisc *drzewo = NULL;
    struct Dane dane;
    int liczba = 0;

    FILE *file;
    struct Dane *tab;

    struct Wezel *stos = NULL;

    // wczytaj drzewo
    do{
        scanf("%d", &dane.wartosc);
        dane.indeks = liczba;

        add(dane, &drzewo);

        ++liczba;
    }while (dane.wartosc);

    // drukuj drzewo
    printf("Drzewo:\n");
    drukujDrzewo(1, drzewo);

    // otworz plik
    file = fopen("drzewo.bin", "wb+");
    if(file == NULL){
        printf("Blad otwarcia pliku!");
        exit(EXIT_FAILURE);
    }

    // zapisz drzewo do pliku
    zapiszDrzewo(file, drzewo);
    rewind(file);

    // zaalokuj pamięc na tablicę danych
    tab = (struct Dane*)malloc(liczba * sizeof(struct Dane));
    // wczytaj z pliku
    fread(tab, sizeof(struct Dane), liczba, file);
    // wyswietl z tablicy
    printf("Dane z tablicy:\n");
    for (int i = 0; i < liczba; ++i) {
        print_dane(tab[i]);
    }
    printf("\n");
    free(tab);

    // spłaszcz drzewo do stosu i wydrukuj
    flaten(&stos, drzewo);
    printf("Stos:\n");
    print(stos);

    // usuń
    empty(&stos);
    usunDrzewo(&drzewo);

    return 0;
}