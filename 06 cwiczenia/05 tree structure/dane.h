#ifndef DANE_H
#define DANE_H

struct Dane{
    int indeks;
    int wartosc;
};

void print_dane(struct Dane dane);
bool relacja(struct Dane dane_l, struct Dane dane_p);

#endif //DANE_H
