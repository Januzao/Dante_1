#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int input[MAX_SIZE];
    int x[MAX_SIZE];
    int i, j, userInput, uniqueCount = 0;

    printf("podaj liczby: ");
    for (i = 0; i < MAX_SIZE; i++) {
        if (scanf("%d", &userInput) != 1) {
            printf("Incorrect input\n");
            return 1;
        }
        if (userInput == 0) {
            break;
        }
        input[i] = userInput;
    }
    if (i < 1) {
        printf("not enough data available\n");
        return 2;
    }
    for (j = 0; j < i; j++) {
        int duplicate = 0;
        for (int k = 0; k < uniqueCount; k++) {
            if (input[j] == x[k]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            x[uniqueCount] = input[j];
            uniqueCount++;
        }
    }

    for (j = 0; j < uniqueCount; j++) {
        printf("%d ", x[j]);
    }
    return 0;
}
