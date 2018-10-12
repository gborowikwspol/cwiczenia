#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;

    double c = 0.00000001;
    double d = 0.0000000000001;
    double eps = 0.001;

    printf("%i\n", a == b);

    printf("%i\n", (c - d) * (c - d) < eps);

    return 0;
}
