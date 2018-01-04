#include <stdio.h>

int main() {
    int znak = 0;

    for (znak = 0; znak < 256; znak++) {
        printf("wartosc calkowita: %d,\tkod ASCII %c\n", znak, znak);
    }
    return 0;
}
