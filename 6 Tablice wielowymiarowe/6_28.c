#include <stdio.h>

#define ROZMIAR 10
#define ROZMIAR_WYJSCIOWY 8

int main() {
    int macierz[ROZMIAR][ROZMIAR];
    double macierzWyjsciowa[ROZMIAR_WYJSCIOWY][ROZMIAR_WYJSCIOWY];

    printf("Podaj liczby do macierzy (10x10):\n");
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    for (int i = 1; i < ROZMIAR - 1; ++i) {
        for (int j = 1; j < ROZMIAR - 1; ++j) {
            double suma = 0.0;
            for (int x = i - 1; x <= i + 1; ++x) {
                for (int y = j - 1; y <= j + 1; ++y) {
                    suma += macierz[x][y];
                }
            }
            macierzWyjsciowa[i - 1][j - 1] = suma / 9.0;
        }
    }
    printf("(8x8):");
    for (int i = 0; i < ROZMIAR_WYJSCIOWY; ++i) {
        for (int j = 0; j < ROZMIAR_WYJSCIOWY; ++j) {
            printf("% 4.2f ", macierzWyjsciowa[i][j]);
        }
        printf("\n");
    }

    return 0;
}
