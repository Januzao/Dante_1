#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main() {
    srand(time(NULL));
    int matrix[N][N];
    printf("Maciez A:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = rand() % 10 + 1;
            printf("|%2d ", matrix[i][j]);
        }
        printf("|\n");
    }

    int matrix2[N][N];
    printf("Maciez B:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix2[i][j] = rand() % 10 + 1;
            printf("|%2d ", matrix2[i][j]);
        }
        printf("|\n");
    }
    int matrix3[N][N];
    printf("Maciez C:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix3[i][j] = (i == j) ? 1 : 0;
            printf("|%2d ", matrix3[i][j]);
        }
        printf("|\n");
    }

    return 0;
}

