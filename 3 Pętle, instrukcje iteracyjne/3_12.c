#include <stdio.h>

int main() {
    int n;
    unsigned long long silnia = 1;

    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Incorrect input\n");
        return 1;
    }

    if (n < 0 || n >= 21) {
        printf("Incorrect input\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        silnia *= i;
    }

    printf("%llu\n", silnia);

    return 0;
}
