#include <stdio.h>

int main() {
    int members[10];

    printf("Podaj 10 liczb: ");
    for (int i = 0; i < 10; i += 2) {
        if (scanf("%d %d", &members[i], &members[i + 1]) != 2) {
            printf("Input data type error\n");
            return 1;
        }
    }

    int sum = 0;
    int max = members[0];
    int min = members[0];

    for (int i = 0; i < 10; i++) {
        sum += members[i];
        if (members[i] > max) {
            max = members[i];
        }
        if (members[i] < min) {
            min = members[i];
        }
    }

    double average = (double)sum / 10;

    printf("Srednia: %.4f\n", average);
    printf("Wartosc maksymalna: %d\n", max);
    printf("Wartosc minimalna: %d\n", min);

    return 0;
}
