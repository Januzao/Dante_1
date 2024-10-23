#include <stdio.h>

int main() {
    int input;
    int counts[11] = {0};
    printf("Podaj liczby: ");
    while (1) {
        if (scanf("%d", &input) != 1) return printf("Incorrect input"),1;
        if (input == -1) break;
        if (input >= 0 && input <= 10) counts[input]++;
    }
    for (int i = 0; i <= 10; i++)printf("%d - %d\n", i, counts[i]);
    return 0;
}
