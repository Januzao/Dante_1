#include <stdio.h>

int main() {
    int boba[100];
    int x = 0;
    printf("Podaj liczby: ");
    for (int i = 0; i < 100; i++) {
        if (scanf("%d", &boba[i]) != 1)
            return printf("Incorrect input"),1;
        if (boba[i] == 0)
            break;
        x++;
    }
    if (x == 0)
        return printf("not enough data available"),2;

    for (int i = 0; i < x; i += 2) {
        switch (x % 2) {
            case 0:
                printf(" %d", boba[x - 2 - i]);
                break;
            default:
                printf(" %d", boba[x - 1 - i]);
        }
    }
    return 0;
}
