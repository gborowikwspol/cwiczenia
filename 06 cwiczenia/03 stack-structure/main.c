#include <stdio.h>
#include "stos.h"

int main(){
    struct Wezel *top = NULL; //wskaznik stosu
    struct Dane para;

    para.indeks = 1;
    para.wartosc = 23;
    push(&top, para);

    para.indeks = 2;
    para.wartosc = 62;
    push(&top, para);

    para.indeks = 3;
    para.wartosc = -35;
    push(&top, para);

    para.indeks = 4;
    para.wartosc = 13;
    push(&top, para);

    return 0;
}
