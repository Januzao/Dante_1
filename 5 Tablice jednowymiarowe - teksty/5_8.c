#include <ctype.h>
#include <stdio.h>
#include <string.h>


#define COUNT 102
#define COUNT1 201

int main(){
    char macierz[COUNT], macierz2[COUNT1];
    int jay, k = 0, length;

    printf("Podaj tekst: ");
    fgets(macierz, COUNT, stdin);

    length = strlen(macierz);

    if (isdigit(macierz[length - 2])){
        printf("Incorrect input");
        return 1;
    }

    if (length > 100) {
        printf("Input is too long\n");
        return 2;
    }

    for (int j = 0; j < COUNT; j++) {
        if (macierz[j] == '\n' || macierz[j] == '\0') {
            break;
        }
        if (k == 200) {
            printf("Output is too long\n");
            return 3;
        }
        if (isdigit(macierz[j])) {
            if (isdigit(macierz[j + 1])) {
                printf("Incorrect input");
                return 1;
            }
            jay = macierz[j] - '0';
            if (k + jay >= 200) {
                printf("Output is too long\n");
                return 3;
            }
            for (int l = 0; l < jay; l++) {
                macierz2[k] = macierz[j + 1];
                k++;
            }
            j++;
        } else {
            macierz2[k] = macierz[j];
            k++;
        }
    }
    for (int p = k - 1; p >= 0; p--) {
        if (macierz2[p] == '\n' || macierz2[p] == '\0' || macierz2[p] == ' ') {
            break;
        }
        printf("%c", macierz2[p]);
    }

    return 0;
}