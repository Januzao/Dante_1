#include <stdio.h>

int main() {
    int tablica[11];
    for (int i = 0; i <= 10; i++) {
        tablica[i] = i;
    }
    for (int i = 0; i <= 10; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}
