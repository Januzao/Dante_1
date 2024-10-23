#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;

    printf("Podaj wartosc a:");
    scanf("%d", &x);

    printf("Podaj wartosc b:");
    scanf("%d", &y);

    printf("Podaj wartosc c:");
    scanf("%d", &z);

    double dlugosc = sqrt((double)(x * x + y * y + z * z));

    printf("%.2lf\n", dlugosc);

    return 0;
}
