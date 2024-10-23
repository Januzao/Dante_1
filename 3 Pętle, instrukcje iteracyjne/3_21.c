#include <stdio.h>
#include <stdlib.h>

int main() {
    double min, max;

    printf("Podaj min: ");
    if (scanf("%lf", &min) != 1) {
        printf("Incorrect input\n");
        return 1;
    }

    printf("Podaj max: ");
    if (scanf("%lf", &max) != 1) {
        printf("Incorrect input\n");
        return 1;
    }

    if (min > max) {
        printf("Incorrect range\n");
        return 2;
    }

    for (double x = min; x <= max; x += 0.25) {
        printf("%.2lf ", x);
    }
    printf("\n");

    return 0;
}
