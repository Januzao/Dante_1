#include <stdio.h>
#define ROZMIAR 10

int main() {
    int macierz1[ROZMIAR][ROZMIAR];

    printf("Podaj liczby do macierzy:\n");
    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if (scanf("%d", &macierz1[i][j]) != 1) {
                printf("Incorrect input\n");
                return 1;
            }
        }
    }
    int suma_parzyst = 0;
    int suma_nieparz = 0;

    for (int i = 0; i < ROZMIAR; ++i) {
        for (int j = 0; j < ROZMIAR; ++j) {
            if((i + j) % 2 == 0){
                suma_parzyst += macierz1[i][j];
            } else {
                suma_nieparz += macierz1[i][j];
            }
        }
    }
    int wynik = suma_parzyst - suma_nieparz;
    printf("Wynik = %d", wynik);
    return 0;
}
