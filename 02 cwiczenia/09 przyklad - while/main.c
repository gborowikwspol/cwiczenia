#include <stdio.h>

int main() {
    float suma = 1573.821, skladnik = 3.51; 
    int licznik = 0;

    while (suma > 1E-10) {
            suma -= skladnik;
        skladnik *= skladnik;
        ++licznik; 
    }

    printf("liczba pętli: %d", licznik);

    return 0;
}
