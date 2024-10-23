#include <stdio.h>

#define SIZE 15
#define RANGE 30

int main() {
    int inputArray[SIZE][SIZE];
    int countArray[RANGE] = {0};

    printf("Podaj liczby:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (scanf("%d", &inputArray[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
            if (inputArray[i][j] < 0 || inputArray[i][j] >= RANGE) {
                printf("value out of range\n");
                return 2;
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            countArray[inputArray[i][j]]++;
        }
    }

    printf("Tablica wynikowa: ");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("%d ", countArray[inputArray[i][j]]);
        }
        printf("\n");
    }

    return 0;
}
