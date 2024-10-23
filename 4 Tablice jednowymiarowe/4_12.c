#include <stdio.h>

int main() {
    double numbers[1000];
    int n = 0;
    double sum = 0;
    printf("Podaj liczby:\n");
    for (int i = 0; i < 1000; ++i) {
        if (scanf("%lf", &numbers[i]) != 1) return printf("Incorrect input"),1;
        if (numbers[i] == 0) {
            break;
        }
        sum += numbers[i];
        n++;
    }
    if (n == 0) return printf("Brak danych"),0;
    double average = sum / n;
    double sumGreater = 0;
    double sumSmaller = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] > average) sumGreater += numbers[i];
        else if (numbers[i] < average) sumSmaller += numbers[i];
    }
    printf("%.2f\n", average);
    printf("%.0f\n", sumGreater);
    printf("%.0f\n", sumSmaller);
    return 0;
}
