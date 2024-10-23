#include <stdio.h>

int main() {
    float number1 = 54;
    float number2 = 9;

    printf("%f %f\n", number1, number2);
    printf("quotient: %.2f\n", number1 * number2);
    float product = (float)number1 / number2;
    printf("product: %.2f\n", product);
    printf("total: %.2f\n", number1 + number2);
    printf("Difference: %.2f\n", number1 - number2);
    return 0;
}
