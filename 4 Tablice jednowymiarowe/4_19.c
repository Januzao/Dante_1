#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int input[MAX_SIZE];
    int duplicates[MAX_SIZE];
    int i, j, userInput, duplicateCount = 0, foundDuplicate = 0;

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
    }if (i < 1) {
        printf("not enough data available\n");
        return 2;
    }for (j = 0; j < i; j++) {
        int count = 0;
        for (int k = 0; k < i; k++) {
            if (input[j] == input[k] && j != k) {
                count++;
                break;
            }
        }
        if (count > 0) {
            int alreadyAdded = 0;
            for (int m = 0; m < duplicateCount; m++) {
                if (input[j] == duplicates[m]) {
                    alreadyAdded = 1;
                    break;
                }
            }
            if (!alreadyAdded) {
                duplicates[duplicateCount] = input[j];
                duplicateCount++;
                foundDuplicate = 1;
            }
        }
    }if (foundDuplicate) {
        printf("Przykładowe wyjście: ");
        for (j = 0; j < duplicateCount; j++) {
            printf("%d ", duplicates[j]);
        }} else {
        printf("Nothing to show");
    }
    return 0;
}
