#include <stdio.h>
#include "tree.h"


int main(){
    struct Lisc *drzewo = NULL;
    struct Dane dane;
    int liczba = 0;
    struct Wezel *stos = NULL;
    FILE *file;
    struct Dane *tab;

    file = fopen("drzewo.bin", "wb+");
    if(file == NULL){
        printf("Blad otwarcia pliku!");
        exit(EXIT_FAILURE);
    }


    do{
        scanf("%d", &dane.wartosc);
        dane.indeks = liczba;

        add(dane, &drzewo);

        ++liczba;
    }while (dane.wartosc);

    tab = (struct Dane*)malloc(liczba * sizeof(struct Dane));

    zapiszDrzewo(file, drzewo);
    rewind(file);
    fread(tab, sizeof(struct Dane), liczba, file);

    printf("Dane z tablicy:\n");
    for (int i = 0; i < liczba; ++i) {
        print_dane(tab[i]);
    }
    printf("\n");

    printf("Drzewo:\n");
    drukujDrzewo(1, drzewo);

    flaten(&stos, drzewo);
    printf("Stos:\n");
    print(stos);

    empty(&stos);
    usunDrzewo(drzewo);
    free(tab);

    return 0;
}