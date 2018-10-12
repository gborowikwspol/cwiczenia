#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok;
    bool przestepny;

    printf("Podaj rok: ");
    scanf("%i", &rok);

    przestepny = !(rok % 4) && rok % 100 || !(rok % 400);

    printf("%i", przestepny);
}
