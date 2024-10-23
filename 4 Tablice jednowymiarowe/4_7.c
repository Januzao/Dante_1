#include <stdio.h>

int is_prime(int beba) {
    if (beba <= 1) {
        return 0;
    }
    if (beba <= 3) {
        return 1;
    }
    if (beba % 2 == 0 || beba % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= beba; i += 6) {
        if (beba % i == 0 || beba % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int cucumbers[10];

    for (int i = 0; i < 10; i++) {
        printf("Podaj dwie liczby  %d:", i);
        if (scanf("%d %d", &cucumbers[i], &cucumbers[i + 1]) != 2) {
            printf("Input data type error\n");
            return 1;
        }
        i++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%-4d ", cucumbers[i]);
        if (is_prime(cucumbers[i])) {
            printf("prime\n");
        } else if (cucumbers[i] > 1) {
            printf("composite\n");
        } else {
            printf("other\n");
        }
    }

    return 0;
}
