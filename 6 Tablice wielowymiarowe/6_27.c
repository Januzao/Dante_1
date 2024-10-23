#include <stdio.h>

#define KOLUMS 10
#define WIERSZ 5

int main() {
    printf("Podaj dane:\n");
    int macierz[WIERSZ][KOLUMS];
    for (int i = 0; i < WIERSZ; ++i) {
        for (int j = 0; j < KOLUMS; ++j) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < KOLUMS; ++i) {
        for (int j = 0; j < WIERSZ; ++j) {
            printf("%4d", macierz[j][i]);
        }
        printf("\n");
    }

    return 0;
}