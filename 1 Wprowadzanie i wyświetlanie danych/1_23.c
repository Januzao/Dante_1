#include <stdio.h>

int main() {
    int cyfry;

    printf("Podaj liczby:");
    scanf("%9d", &cyfry);

    // Wydziel i wyświetl trzy liczby trzycyfrowe
    int number1 = cyfry / 1000000;
    int reszta1 = cyfry % 1000000;
    int number2 = reszta1 / 1000;
    int number3 = reszta1 % 1000;


    printf("%03d\n%03d\n%03d\n",number1, number2,number3);

    return 0;
}
