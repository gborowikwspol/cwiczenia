#include "tree.h"

struct Lisc *nowyLisc(struct Dane dane) {
    struct Lisc *lisc;

    lisc = (struct Lisc *) malloc(sizeof(struct Lisc));
    if (lisc == NULL) {
        printf("Brak pamieci!");
        exit(EXIT_FAILURE);
    }

    lisc->dane = dane;
    lisc->lewy = NULL;
    lisc->prawy = NULL;

    return lisc;
}

void add(struct Dane dane, struct Lisc **korzen) {
    if (*korzen) {
        if (relacja((*korzen)->dane, dane)) {
            add(dane, (*korzen)->prawy);
        } else {
            add(dane, (*korzen)->lewy);
        }
    } else {
        *korzen = nowyLisc(dane);
    }
}

void usunDrzewo(struct Lisc *korzen) {
    if (!isTreeEmpty(korzen)) {
        if (korzen->prawy != NULL) {
            usunDrzewo(korzen->prawy);
        }
        if (korzen->lewy != NULL) {
            usunDrzewo(korzen->lewy);
        }
        free(korzen);
    }
}

bool isTreeEmpty(struct Lisc *korzen) {
    return !korzen;
}

void zapiszDrzewo(FILE *file, struct Lisc *korzen) {
    if (!isTreeEmpty(korzen)) {
        if (korzen->prawy != NULL) {
            zapiszDrzewo(file, korzen->prawy);
        }
        if (korzen->lewy != NULL) {
            zapiszDrzewo(file, korzen->lewy);
        }
        fwrite(&(korzen->dane), sizeof(struct Dane), 1, file);
    }
}

void flaten(struct Wezel **pWezel, struct Lisc *korzen) {
    if (!isTreeEmpty(korzen)) {
        if (korzen->prawy != NULL) {
            flaten(pWezel, korzen->prawy);
        }
        if (korzen->lewy != NULL) {
            flaten(pWezel, korzen->lewy);
        }
        push(pWezel, korzen->dane);
    }
}

void drukujLiscNaPoziomie(int poziom, struct Lisc *lisc) {
    for (int i = 1; i < poziom; ++i) { printf("      "); }
    print_dane(lisc->dane);
}

void drukujDrzewo(int poziom, struct Lisc *korzen) {
    if (!isTreeEmpty(korzen)) {
        drukujLiscNaPoziomie(poziom, korzen);
        drukujDrzewo(poziom + 1, korzen->prawy);
        drukujDrzewo(poziom + 1, korzen->lewy);
    }
}