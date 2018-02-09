#include <stdio.h>
#include "woda.h"

int main() {
    int histogram[N] = {1, 2, 1, 1, 1, 1, 4, 2, 1, 1, 3, 1};
//    int histogram[N] = {0, 1, 0, 2, 1, 0, 1, 5, 2, 1, 2, 1};
//    int histogram[N] = {3, 5, 4, 2, 1, 7, 2};

    printf("Maksymalny stan zgromadzonej wody wynosi %d.\n", policzWode(histogram));

    return 0;
}
