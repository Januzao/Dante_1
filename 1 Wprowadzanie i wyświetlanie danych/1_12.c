#include <stdio.h>

int main() {
    float wartosc;

    printf("Wprowadz liczbe zmiennoprzecinkowa:");
    scanf("%f", &wartosc);

    printf("Wprowadzona wartosc: %.2f\n", wartosc);

    printf("Dziesieciokrotnosc wprowadzonej wartosci: %.2f\n", wartosc * 10);

    return 0;
}
