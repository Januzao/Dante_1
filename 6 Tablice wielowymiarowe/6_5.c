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
            matrix[i][j] = rand() % 10;
            printf("|%2d ", matrix[i][j]);
        }
        printf("|\n");
    }

    int matrix2[N][N];
    printf("Maciez B:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix2[i][j] = rand() % 10;
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

    int matrixapb[N][N];
    printf("Maciez A+B:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrixapb[i][j] = matrix[i][j] + matrix2[i][j];
            printf("|%2d ", matrixapb[i][j]);
        }
        printf("|\n");
    }
    int matrixamb[N][N];
    printf("Maciez A-B:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrixamb[i][j] = matrix[i][j] - matrix2[i][j];
            printf("|%2d ", matrixamb[i][j]);
        }
        printf("|\n");
    }
    int matrixapbpc[N][N];
    printf("Maciez A+B+C:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrixapbpc[i][j] = matrixapb[i][j] + matrix3[i][j];
            printf("|%2d ", matrixapbpc[i][j]);
        }
        printf("|\n");
    }
    int matrixambmc[N][N];
    printf("Maciez A-B-C:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrixambmc[i][j] = matrixamb[i][j] - matrix3[i][j];
            printf("|%2d ", matrixambmc[i][j]);
        }
        printf("|\n");
    }
    int matrixmb[N][N];
    printf("Maciez -B:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrixmb[i][j] = matrix2[i][j] * (-1);
            printf("|%2d ", matrixmb[i][j]);
        }
        printf("|\n");
    }
    return 0;
}

