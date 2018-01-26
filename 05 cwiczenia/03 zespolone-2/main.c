#include <stdio.h>

struct zespolona{
    double re;
    double im;
};

struct zespolona dodaj(struct zespolona a,
                       struct zespolona b,
                       struct zespolona *wynik
){
    wynik->re = a.re + b.re;
    wynik->im = a.im + b.im;
}

int main(){
    struct zespolona x = {3.1, 4.1}, y = {-2.1, 7.5}, w;

    dodaj(x, y, &w);

    printf("a(%.2lf, %.2lf) + b(%.2lf, %.2lf) = w(%.2lf, %.2lf)\n",
            x.re, x.im, y.re, y.im, w.re, w.im);

    return 0;
}
