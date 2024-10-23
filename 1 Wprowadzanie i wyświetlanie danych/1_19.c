#include <stdio.h>

int main()
{
    double x, y;
    printf("podaj x:");
    scanf("%lf", &x);
    y = 2*x*x*x-4*x*x+3*x-7;
    printf("wartosc funkcji: %.6lf", y);
    return 0;
}