#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ILOSC2 201
#define ILOSC 105
#define KEK 1


int main(void){
    char tablica[ILOSC], tablica1[ILOSC2];
    int k = 0, length;

    printf("Podaj tekst: ");
    fgets(tablica, ILOSC, stdin);

    length = strlen(tablica);
    if (tablica[length - KEK] == '\0' || tablica[length - KEK] == ' ' || tablica[length - KEK] == '\n') length--;

    for (int i = 0; i < length - 1; i++) {

        if((tablica[i] < 'A' || tablica[i] > 'Z') && (tablica[i] < 'a' || tablica[i] > 'z')){
            printf("Incorrect input");
            return KEK;
        }

        if(isdigit(tablica[i])){
            printf("Incorrect input");
            return KEK;
        }
    }
    if (length >= 101) {
        printf("Input is too long");
        return 2;
    }
    for (int j = 0; j < ILOSC; j++) {
        if (tablica[j] == '\n' || tablica[j] == '\0') {
            break;
        }
        if (k == 200) {
            printf("Output is too long\n");
            return 3;
        }
        if (tablica[j] >= 'A' && tablica[j] <= 'Z'){
            if (k >= 197) {
                printf("Output is too long\n");
                return 3;
            }
            for (int l = 0; l < 3; l++) {
                tablica1[k] = tablica[j];
                k++;
            }
        } else {
            tablica1[k] = tablica[j];
            k++;
        }
    }

    for (int p = k - KEK; p >= 0; p--) {
        if (tablica1[p] == '\n' || tablica1[p] == '\0' || tablica1[p] == ' ') {
            break;
        }
        printf("%c", tablica1[p]);
    }
    return 0;
}