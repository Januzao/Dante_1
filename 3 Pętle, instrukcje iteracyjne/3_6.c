#include <stdio.h>

int main() {
    double power_of_10 = 1;

    for (int i = 0; i <= 19; i++)
        printf("%.0f%c", power_of_10, i < 19 ? ' ' : '\n'), power_of_10 *= 10;

    return 0;
}
