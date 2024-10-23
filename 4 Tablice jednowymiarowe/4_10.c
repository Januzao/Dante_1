#include <stdio.h>

int main() {
    int n = 0;
    int arr[100];
    int sum = 0;
    int min, max;
    printf("Enter data:");

    for (int i = 0; i < 100; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Incorrect input\n");
            return 1;
        }
        if (arr[i] == -1) {
            break;
        }
        if (i == 0) {
            min = max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
        n++;
    }

    if (n == 0) {
        printf("No data entered\n");
        return 1;
    }

    printf("%d\n", n);
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", (double) sum / n);
    printf("%d\n", sum);

    for (int i = 0; i < n; ++i) {
        if (arr[i] == min) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        if (arr[i] == max) {
            printf("%d ", i);
        }
    }

    return 0;
}
