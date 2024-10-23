#include <stdio.h>
#include <math.h>

int main() {
    double numbers[10];
    double sum = 0.0;

    printf("Podaj liczby:\n");

    for (int i = 0; i < 10; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            printf("incorrect input\n");
            return 1;
        }
        sum += fabs(numbers[i]);
    }

    printf("%.2lf\n", sum);

    return 0;
}
