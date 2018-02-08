#include "dane.h"

void print_dane(struct Dane dane) {
    printf("(%d, %d) ", dane.indeks, dane.wartosc);
}

bool relacja(struct Dane dane_l, struct Dane dane_p){
    return (dane_l.wartosc < dane_p.wartosc);
}
