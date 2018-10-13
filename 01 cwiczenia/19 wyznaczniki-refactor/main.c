#include <stdio.h>

void wyswietl_info();

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2);

void wyswietl_uklad_rownan(double a1, double b1, double c1, double a2, double b2, double c2);

void
oblicz_wyznaczniki(double a1, double b1, double c1, double a2, double b2, double c2, double *W, double *Wx, double *Wy);

void wyswietl_wyznaczniki(double W, double Wx, double Wy);

void oblicz_rozwiazanie(double W, double Wx, double Wy);

double wyznacznik(double k, double l, double m, double n) {
    return k * n - l * m;
}

int main() {
    double a1, b1, c1, a2, b2, c2;
    double W, Wx, Wy;

    wyswietl_info();

    wczytaj_wspolczynniki(&a1, &b1, &c1, &a2, &b2, &c2);

    wyswietl_uklad_rownan(a1, b1, c1, a2, b2, c2);

    oblicz_wyznaczniki(a1, b1, c1, a2, b2, c2, &W, &Wx, &Wy);

    wyswietl_wyznaczniki(W, Wx, Wy);

    oblicz_rozwiazanie(W, Wx, Wy);

    return 0;
}

void oblicz_rozwiazanie(double W, double Wx, double Wy) {
    if (W != 0.0) {
        printf("Rozwiązanie:\n");
        printf("x = %5.2lf, y = %5.2lf", Wx / W, Wy / W);
        printf("\n");
    } else {
        if (Wx != 0.0 || Wy != 0.0) {
            printf("Układ równań sprzeczny - nie ma rozwiązania.");
        } else {
            printf("Układ równań nieoznaczony - nieskończenie wiele rozwiązań.");
        }
    }
}

void wyswietl_wyznaczniki(double W, double Wx, double Wy) {
    printf("Wyznacznik W = %lf\n", W);
    printf("Wyznacznik Wx = %lf\n", Wx);
    printf("Wyznacznik Wy = %lf\n", Wy);
    printf("\n");
}

void
oblicz_wyznaczniki(double a1, double b1, double c1, double a2, double b2, double c2, double *W, double *Wx,
                   double *Wy) {
    (*W) = wyznacznik(a1, a2, b1, b2);
    (*Wx) = wyznacznik(c1, c2, b1, b2);
    (*Wy) = wyznacznik(a1, a2, c1, c2);
}

void wyswietl_uklad_rownan(double a1, double b1, double c1, double a2, double b2, double c2) {
    printf("Twój układ równań:\n");
    printf("%5.2lf*x + %5.2lf*y = %5.2lf\n", a1, b1, c1);
    printf("%5.2lf*x + %5.2lf*y = %5.2lf\n", a2, b2, c2);
    printf("\n");
}

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {
    printf("Podaj a1: ");
    scanf("%lf", a1);
    printf("Podaj b1: ");
    scanf("%lf", b1);
    printf("Podaj c1: ");
    scanf("%lf", c1);
    printf("Podaj a2: ");
    scanf("%lf", a2);
    printf("Podaj b2: ");
    scanf("%lf", b2);
    printf("Podaj c2: ");
    scanf("%lf", c2);
    printf("\n");
}

void wyswietl_info() {
    printf("Program rozwiązuje układ dwóch równań liniowych:\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("\n");
    printf("Podaj współczynniki.\n");
}

