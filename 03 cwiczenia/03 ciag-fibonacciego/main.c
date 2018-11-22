#include "stdio.h"

int main(){
    int x = 0, y = 1, z;
    int i;

    for (i = 0; i < 20; ++i) {
        printf("%d ", x);
        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}
