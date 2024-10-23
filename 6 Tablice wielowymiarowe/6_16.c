#include <stdio.h>

#define MAXIMUM 5

int main() {
    int Suma_max = 0;

    printf("Podaj liczby:\n");
    int macierz[MAXIMUM][MAXIMUM];
    for (int i = 0; i < MAXIMUM; ++i) {
        for (int j = 0; j < MAXIMUM; ++j) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i = 0; i < MAXIMUM; ++i) {
        Suma_max += macierz[i][0];
    }
    for (int i = 0; i < MAXIMUM; ++i) {
        int count = 0;

        for (int j = 0; j < MAXIMUM; ++j) {
            count += macierz[j][i];
        }


        for (int i = 0; i < MAXIMUM; ++i) {
            int count2 = 0;
            for (int j = 0; j < MAXIMUM; ++j) {
                count2 += macierz[j][i];
            }
            if (count2 >= Suma_max) {
                Suma_max = count2;
            }
        }
        if (count == Suma_max) {
            for (int j = 0; j < MAXIMUM; ++j) {
                printf("%d ", macierz[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}