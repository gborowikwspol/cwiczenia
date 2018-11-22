#include <stdbool.h>
#include "stdio.h"

bool czyLiczba(char znak) {
    if (('0' <= znak) && (znak <= '9')){
        return true;
    }
    return false;
}

int main() {

    char ciag[] = "Ala ma 2 koty.";
    int i;
    bool istnieje = false;

    for (i = 0; ciag[i]; ++i) {
        if (czyLiczba(ciag[i])) {
            istnieje = true;
            break;
        }
    }

    istnieje ? printf("Istnieje") : printf("Nie istnieje");

    return 0;
}
