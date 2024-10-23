#include <stdio.h>

int main() {
    int firstSequence[100];
    int secondSequence[100];
    int difference[100];
    int n1 = 0, n2 = 0, n;
    int kostyl = 0;
    printf("Podaj pierwszy ciąg:\n");
    while (1) {
        int num;
        if (scanf("%d", &num) != 1) {
            printf("Incorrect input\n");
            return 1;
        }
        if (num == 0) {
            break;
        }
        if (n1 < 100) {
            firstSequence[n1] = num;
            n1++;
        }
    }if(n1 < 1) {
        kostyl = 1;
        printf("Not enough data available\n");
    }
    printf("Podaj drugi ciąg:\n");
    while (1) {
        int num;
        if (scanf("%d", &num) != 1) {
            printf("Incorrect input\n");
            return 1;
        }
        if (num == 0) {
            break;
        }
        if (n2 < 100) {
            secondSequence[n2] = num;
            n2++;
        }
    }if(n2 < 1 || kostyl == 1) {
        printf("Not enough data available\n");
        return 2;
    }
    n = n1 < n2 ? n1 : n2;
    for (int i = 0; i < n; i++) {
        difference[i] = firstSequence[i] - secondSequence[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", difference[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
