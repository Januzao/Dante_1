#include <stdio.h>

int main() {
    double number, sum = 0.0;

    for (int i = 1; i <= 10; i++) {
        printf("Podaj %d liczbe:", i);
        if (scanf("%lf", &number) != 1) {
            printf("Incorrect input\n");
            return 1;
        }
        sum += number;
    }

    printf("Suma: %lf\n", sum);

    return 0;
}
