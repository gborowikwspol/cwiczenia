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