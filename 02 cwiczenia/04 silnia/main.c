#include <stdio.h>

#define TEST

unsigned long licz_silnie(int podstawa) {
    unsigned long licznik;
    unsigned long silnia = 1;

    for (licznik = 2; licznik <= podstawa; ++licznik) {
        silnia *= licznik;
    }
    return silnia;
}


#ifdef TEST

void nd(int licznik) { printf("Test nr %i nie działa\n", licznik); }

void test_licz_silnie_0(int licznik) {
    if (licz_silnie(0) != 1) nd(licznik);
}

void test_licz_silnie_1(int licznik) {
    if (licz_silnie(1) != 1) nd(licznik);
}

void test_licz_silnie_2(int licznik) {
    if (licz_silnie(2) != 2) nd(licznik);
}

void test_licz_silnie_3(int licznik) {
    if (licz_silnie(5) != 120) nd(licznik);
}

void run_test_pool() {
    int licznik = 0;

    test_licz_silnie_0(++licznik);
    test_licz_silnie_1(++licznik);
    test_licz_silnie_2(++licznik);
    test_licz_silnie_3(++licznik);
}

#endif


int main() {

#ifndef TEST

    unsigned long wynik;
    unsigned long podstawa;

    printf("Podaj podstawe silni w przedziale od 0 do 15: \n");
    scanf("%ld", &podstawa);

    if (podstawa >= 0 && podstawa <= 15) {
        wynik = licz_silnie(podstawa);
        printf("silnia(%ld) = %ld", podstawa, wynik);
    } else {
        printf("Podałeś liczbę spoza zakresu!\n");
    }

#else

    run_test_pool();

#endif

    return 0;
}

