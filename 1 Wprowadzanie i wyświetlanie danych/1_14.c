#include <stdio.h>

int main() {
    float number1, number2;
    printf("podaj 1 liczba calkowita:");
    scanf("%f", &number1);

    printf("podaj 2 liczba calkowita:");
    scanf("%f", &number2);

    float suma = number1 + number2;
    float roznica = number1 - number2;
    float iloczyn = number2 * number1;
    float iloraz = 0;
    if (number2 != 0) {
        iloraz = number1 / number2;
    }

    printf("Suma: %.2f\n", suma);
    printf("Roznica: %.2f\n", roznica);
    printf("Iloczyn: %.2f\n", iloczyn);
    printf("Iloraz: %.2f\n", iloraz);

    return 0;

}