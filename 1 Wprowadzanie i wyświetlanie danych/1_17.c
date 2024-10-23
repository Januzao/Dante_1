#include <stdio.h>

int main() {
    int liczba1, liczba2, liczba3, liczba4, liczba5, liczba6, liczba7, liczba8, liczba9, liczba10;
    int suma;

    printf("Podaj dziesiec liczb calkowitych, oddzielajac je spacjami:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &liczba1, &liczba2, &liczba3, &liczba4, &liczba5, &liczba6, &liczba7, &liczba8, &liczba9, &liczba10);
    suma = liczba1 + liczba2 + liczba3 + liczba4 + liczba5 + liczba6 + liczba7 + liczba8 + liczba9 + liczba10;
    double srednia = (double)suma / 10;
    printf("srednia arytmetyczna= %.4lf\n", srednia);
    return 0;
}
