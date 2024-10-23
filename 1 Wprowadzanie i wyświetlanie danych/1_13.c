#include <stdio.h>

int main() {
    int number1, number2;
    printf("podaj 1 liczba calkowita:");
    scanf("%d", &number1);

    printf("podaj 2 liczba calkowita:");
    scanf("%d", &number2);

    int suma = number1 + number2;
    int roznica = number1 - number2;
    int iloczyn = number2 * number1;
    int iloraz = 0;  // Domyślnie ustawiamy iloraz na 0
    if (number2 != 0) {
        iloraz = number1 / number2;
    }

    printf("Suma: %d\n", suma);
    printf("Roznica: %d\n", roznica);
    printf("Iloczyn: %d\n", iloczyn);
    printf("Iloraz: %d\n", iloraz);

    return 0;

}