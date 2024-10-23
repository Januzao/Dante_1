#include <stdio.h>

int main() {
    double principal;
    int months;

    printf("Podaj kwote poczatkowa: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Incorrect input\n");
        return 1;
    }

    printf("Podaj liczbe miesiecy: ");
    if (scanf("%d", &months) != 1 || months < 0) {
        printf("Incorrect input\n");
        return 1;
    }

    for (int i = 0; i < months; i++) {
        principal += (0.01 * principal);  // Dodaj oprocentowanie za każdy miesiąc
    }

    printf("Kwota koncowa: %.2lf\n", principal);

    return 0;
}
