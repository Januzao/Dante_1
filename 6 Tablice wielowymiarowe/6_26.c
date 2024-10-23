#include <stdio.h>

#define N 10
#define M 2

int main() {
    int matrix[N][N];
    printf("Podaj liczby: \n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    int smal_matrix[M][M];
    printf("Podaj liczby: \n");
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (scanf("%d", &smal_matrix[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }

    int count = 0;
    for (int i = 0; i <= N - M; ++i) {
        for (int j = 0; j <= N - M; ++j) {
            int match = 1;
            for (int k = 0; k < M; ++k) {
                for (int l = 0; l < M; ++l) {
                    if (matrix[i + k][j + l] != smal_matrix[k][l]) {
                        match = 0;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    for (int i = 0; i <= N - M; ++i) {
        for (int j = 0; j <= N - M; ++j) {
            int match = 1;
            for (int k = 0; k < M; ++k) {
                for (int l = 0; l < M; ++l) {
                    if (matrix[i + k][j + l] != smal_matrix[k][l]) {
                        match = 0;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                printf("%d %d\n", j, i);
            }
        }
    }

    return 0;
}
