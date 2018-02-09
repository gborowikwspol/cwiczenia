#include <stdio.h>

#define N 30

int policzWode(int *pInt);

int main() {
    int histogram[N] = {1, 2, 1, 1, 1, 1, 4, 2, 1, 1, 3, 1};
//    int histogram[N] = {0, 1, 0, 2, 1, 0, 1, 5, 2, 1, 2, 1};
//    int histogram[N] = {3, 5, 4, 2, 1, 7, 2};

    printf("Maksymalny stan zgromadzonej wody wynosi %d.\n", policzWode(histogram));

    return 0;
}

int policzWode(int *histogram) {
    int woda = 0;

    int l = 0, p = N - 1;
    int l_max = 0, p_max = 0;

    while (l <= p) {
        if (histogram[l] < histogram[p]) {
            if (histogram[l] > l_max) {
                l_max = histogram[l]; // zapamietaj nowe maksimum
            } else {
                woda += l_max - histogram[l];
            }

            l++;
        } else { //histogram[l] >= histogram[p]
            if (histogram[p] > p_max) {
                p_max = histogram[p]; // zapamietaj nowe maksimum
            } else {
                woda += p_max - histogram[p];
            }

            p--;
        }
    }

    return woda;
}
