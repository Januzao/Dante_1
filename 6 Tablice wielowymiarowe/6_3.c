#include <stdio.h>

#define N 5

int main() {
    int matrix[N][N];
    printf("Podaj elementy macierzy %dx%d:\n", N, N);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][N - 1 - i];
        matrix[i][N - 1 - i] = temp;
    }
    printf("Nowa macierz:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("| %2d ", matrix[i][j]);

        }
        printf("\n");
    }

    return 0;
}
