#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Podaj pierwsza przyprostokatna:");
    scanf("%lf", &a);
    printf("Podaj druga przyprostokatna:");
    scanf("%lf", &b);

    c = sqrt(a*a+b*b);


    double kat1 = asin(a / c) * 180 / M_PI;
    double kat2 = asin(b / c) * 180 / M_PI;
    
    printf("Przeciwprostokatna: %.2lf\n", c);
    printf("%.2lf\n", kat1);
    printf("%.2lf\n", kat2);

    return 0;
}