#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2;

    printf("Podaj liczby:");
    scanf("%d %d", &number1, &number2);

    int liczmin = (number1 + number2 - abs(number1 - number2)) / 2;
    int liczmax = (number1 + number2 + abs(number1 - number2)) / 2;

    printf("Maximum: %d\n", liczmax);
    printf("Minimum: %d\n", liczmin);
    return 0;
}
