#include <stdio.h>

int main() {
    int numbers[10];

    for (int kek = 0; kek < 10; kek++) {
        printf("Podaj dwie liczby  %d:", kek);
        if (scanf("%d %d", &numbers[kek], &numbers[kek + 1]) != 2) {
            printf("Input data type error\n");
            return 1;
        }
        kek++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%-4d %s\n", numbers[i], (numbers[i] % 2 == 0) ? "even" : "odd");
    }

    return 0;
}
