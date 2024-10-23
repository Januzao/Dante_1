#include <stdio.h>

#define ROZMIAR 5

int main() {
    int macierz1[ROZMIAR][ROZMIAR];
    printf("Podaj liczby do macierzy:\n");
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if (scanf("%d", &macierz1[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }
    int sumaKolumn[ROZMIAR] = {0};

    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            sumaKolumn[j] += macierz1[i][j];
        }
    }

    printf("Wynik: ");
    for (int j = 0; j < ROZMIAR; ++j) {
        double sredniaKolumny = (double) sumaKolumn[j] / ROZMIAR;
        printf("%.2lf ", sredniaKolumny);
    }

    return 0;
}
