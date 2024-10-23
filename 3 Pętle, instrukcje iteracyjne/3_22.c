#include <stdio.h>

int main() {
    for (int wer = 0; wer <= 100; wer++) {
        if ((wer >= 10 && wer < 15) || (wer >= 40 && wer <= 60) || (wer > 70 && wer < 80)) {
            printf("*%d\n", wer);
        } else {
            printf("%d\n", wer);
        }
    }

    return 0;
}
