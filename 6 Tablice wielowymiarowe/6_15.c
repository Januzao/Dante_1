#include <stdio.h>

#define N 5
int main() {
    int suma_jed = 0;
    int suma_dwa = 0;

    printf("Podaj liczby:\n");
    int macierz[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i = 0, j = 4; i < N; i++, j--) {
        suma_dwa += macierz[i][j];
    }

    for (int i = 0; i < N; i++) {
        suma_jed += macierz[i][i];
    }

    printf("%d %d", suma_jed, suma_dwa);

    return 0;
}