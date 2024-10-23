#include <stdio.h>

int main() {
    int wartosc;

    // Wczytaj wartość od użytkownika
    printf("Wprowadz liczbe calkowita: ");
    scanf("%d", &wartosc);

    // Wyświetl wprowadzoną wartość
    printf("Wprowadzona wartosc: %d\n", wartosc);

    // Wyświetl dziesięciokrotność wprowadzonej wartości bez nowej linii
    printf("Dziesieciokrotnosc wprowadzonej wartosci: %d\n", wartosc * 10);

    return 0;
}
