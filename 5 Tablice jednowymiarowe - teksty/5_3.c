#include <stdio.h>

int main() {
    char imie[31] = {0};

    printf("Jak masz na imie?\n");
    scanf("%30s", imie);
    printf("Witaj %s!\n", imie);

    return 0;
}
