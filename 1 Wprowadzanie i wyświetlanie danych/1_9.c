#include <stdio.h>

int main() {
    int number1 = 49;
    int number2 = 7;

    // Wyświetlenie zawartości zmiennych w jednej linii, oddzielone spacjami
    printf("%d %d\n", number1, number2);

    // Wyświetlenie iloczynu
    printf("quotient: %d\n", number1 * number2);

    // Wyświetlenie ilorazu z dokładnością do dwóch miejsc po przecinku
    float iloraz = (float)number1 / number2;
    printf("product: %.2f\n", iloraz);

    // Wyświetlenie sumy
    printf("total: %d\n", number1 + number2);

    // Wyświetlenie różnicy
    printf("Difference: %d\n", number1 - number2);

    return 0;
}
