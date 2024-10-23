#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int aloha[100];
    int numberCount = 0;
    printf("podaj liczby:\n");
    int number;

    for (int i = 0; i < 100; ++i) {
        if (scanf("%d", &number) != 1) {
            return printf("Incorrect input"),1;
        }
        if (number == 0)
            break;
        aloha[i] = number;
        numberCount++;
    }
    if (numberCount < 1)
        return printf("not enough data available"),2;
    int anyOutput = 0;

    for (int i = numberCount - 1; i >= 0; i--) {
        if (isPrime(i)) {
            printf("%d ", aloha[i]);
            anyOutput = 1;
        }
    }
    if (!anyOutput)
        printf("Nothing to show");
    return 0;
}
