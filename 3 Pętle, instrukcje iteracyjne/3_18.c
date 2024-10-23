#include <stdio.h>

int main() {
    int jaja, sum_parzyste = 0, sum_nieparzyste = 0;

    printf("Podaj liczby:\n");

    while (1) {
        if (scanf("%d", &jaja) != 1) {
            printf("Incorrect input\n");
            return 1;
        }
        if (jaja == -1) {
            break;
        }
        if (jaja % 2 == 0) {
            sum_parzyste += jaja;
        } else {
            sum_nieparzyste += jaja;
        }
    }
    printf("Suma liczb parzystych: %d\n", sum_parzyste);
    printf("Suma liczb nieparzystych: %d\n", sum_nieparzyste);

    return 0;
}
