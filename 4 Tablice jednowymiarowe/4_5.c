#include <stdio.h>

int main() {
    float values[10];

    for (int wer = 0; wer < 10; wer++) {
        printf("Podaj liczby zmiennoprzec %d: ", wer);
        if (scanf("%f %f", &values[wer], &values[wer + 1]) != 2) {
            printf("Input data type error\n");
            return 1;
        }
        wer++;
    }
    for (int amogus = 0; amogus < 10; amogus++) {
        printf("Indeks %d: %.2f\n", amogus, values[amogus]);
    }

    return 0;
}
