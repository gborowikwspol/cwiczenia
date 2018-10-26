#include <stdio.h>

int main() {
    long ab = 3, cd = 20000;
    int licznik_petli = 0;

    do {
        ++licznik_petli;

        ab *= ab;
        cd += cd;

    } while (ab < cd);

    printf("liczba pętli: %d\n", licznik_petli);

    return 0;
}
