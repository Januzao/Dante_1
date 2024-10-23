#include <stdio.h>

int main() {
    int n = 0;
    int min, max, sum;
    min = max = sum = 0;
    int num;

    printf("Podaj dane:");
    while (1){




        if (scanf("%d", &num) != 1){
            printf("Incorrect input\n");
            return 1;
        }


        if (num == -1) {
            break;
        }




        if (n < 100){
            if (n == 0) {
                min = max = num;
            }
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
            sum += num;
            n++;}

    }

    if (n == 0) {
        printf("No data entered\n");
        return 1;
    }

    printf("%d\n", n);
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.6f\n", (double)sum / n);
    printf("%d\n", sum);

    return 0;
}
