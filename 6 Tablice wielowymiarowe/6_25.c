#include <stdio.h>
#define MAXIMUM 5

int main() {

    int suma = 0;
    printf("Podaj liczby:\n");
    int macierz[MAXIMUM][MAXIMUM];
    for (int i = 0; i < MAXIMUM; ++i) {
        for (int j = 0; j < MAXIMUM; ++j) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < MAXIMUM; ++i) {
        for (int j = i; j < MAXIMUM; ++j) {
            suma += macierz[i][j];
        }
    }

    printf("%d ", suma);

    return 0;
}