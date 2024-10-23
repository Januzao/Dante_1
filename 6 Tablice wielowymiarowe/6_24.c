#include <stdio.h>
#include <math.h>

#define ROZMIAR 5

int main() {
    int row = 0;
    int col = 0;
    double average = 0.0, minDifference = INFINITY;

    printf("Podaj liczby:\n");
    int matrix[ROZMIAR][ROZMIAR];
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
            average += matrix[i][j];
        }
    }

    average /= (ROZMIAR * ROZMIAR);
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            double difference = fabs(matrix[i][j] - average);
            if (difference < minDifference) {
                minDifference = difference;
                row = i;
                col = j;
            }
        }
    }

    printf("%d %d\n", row, col);
    
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            double difference = fabs(matrix[i][j] - average);
            if (difference == minDifference && (i != row || j != col)) {
                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}
