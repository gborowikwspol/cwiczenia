#include "stos.h"

// prywatna
struct Wezel *nowy(struct Dane dane, struct Wezel *pTop) {
    struct Wezel *wezel;

    wezel = (struct Wezel *) malloc(sizeof(struct Wezel));
    if (wezel == NULL) {
        printf("Brak pamieci!");
        exit(EXIT_FAILURE);
    }

    wezel->dane = dane;
    wezel->popr = pTop;

    return wezel;
}

void push(struct Wezel **pTop, struct Dane dane) {
    struct Wezel *wezel = nowy(dane, *pTop); // w nowym wezle wskaz top

    *pTop = wezel; // top wskazuje teraz na nowy wezel

    printf("Para (%d, %d) odlozona na stosie\n",
           dane.indeks, dane.wartosc);
}

struct Dane pop(struct Wezel **pTop) {
    struct Wezel *tymczasowy_wezel = *pTop;
    struct Dane odczytane_dane = tymczasowy_wezel->dane;
    *pTop = (*pTop)->popr;
    free(tymczasowy_wezel);

    return odczytane_dane;
}

struct Dane peek(struct Wezel *pTop) {
    return pTop->dane;
}

int isEmpty(struct Wezel *pTop) {
    return !pTop;
}

void print(struct Wezel *pTop) {
    if (!isEmpty(pTop)) {
        if (pTop->popr != NULL) {
            print(pTop->popr);
        }
        print_dane(pTop->dane);
    }
}

// prywatna
void _empty(struct Wezel *pTop) {
    if (pTop->popr != NULL) {
        _empty(pTop->popr);
    }
    free(pTop);
}

void empty(struct Wezel **pTop) {
    if (!isEmpty(*pTop)) {
        _empty(*pTop);
        *pTop = NULL;
    }
}




