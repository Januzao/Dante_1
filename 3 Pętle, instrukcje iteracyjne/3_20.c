#include <stdio.h>

int main() {
    int min, max;

    printf("Podaj min: ");
    if (scanf("%d", &min) != 1) {
        printf("Incorrect input\n");
        return 1;
    }

    printf("Podaj max: ");
    if (scanf("%d", &max) != 1) {
        printf("Incorrect input\n");
        return 1;
    }

    if (min > max) {
        printf("Incorrect range\n");
        return 2;
    }

    for (int i = min; i <= max; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
