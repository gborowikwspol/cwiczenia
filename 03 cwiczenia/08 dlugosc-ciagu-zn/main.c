#include "stdio.h"

int main() {
    int i = 0;
    char ciag[] = "Ala ma kota";

    while (ciag[++i]){}
    printf("%d", i);

    return 0;
}
