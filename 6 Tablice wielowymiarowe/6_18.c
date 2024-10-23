#include <stdio.h>

#define ROZMIAR 5

int main() {
    int macierz1[ROZMIAR][ROZMIAR];

    printf("Podaj liczby do macierzy 1:\n");
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if (scanf("%d", &macierz1[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    int macierz2[ROZMIAR][ROZMIAR];

    printf("Podaj liczby do macierzy 2:\n");
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if (scanf("%d", &macierz2[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    int macierz3[ROZMIAR][ROZMIAR];

    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            macierz3[i][j] = (macierz1[i][j] > macierz2[i][j]) ? macierz1[i][j] : macierz2[i][j];
        }
    }

    printf("Wynikowa macierz: ");
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            printf("% 2d ", macierz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
