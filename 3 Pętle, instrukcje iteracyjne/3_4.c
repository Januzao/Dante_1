#include <stdio.h>

int main() {
    unsigned long long x;

        printf("podaj liczbe w typu long long:");
    if (scanf("%llu", &x) == 1) {
        unsigned long long ostatnia = x % 10;
        while (x >= 10) {
            x /= 10;
        }
        printf("Pierwsza cyfra: %llu\n", x);
        printf("Ostatnia cyfra: %llu\n", ostatnia);
    } else {
        printf("incorrect input\n");
        return 1;
    }

    return 0;
}
