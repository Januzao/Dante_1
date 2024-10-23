#include <stdio.h>
#include <string.h>

#define MAX_INPUT 1001

int main() {
    int kostyl = 0;
    char array[MAX_INPUT];

    printf("Podaj tekst:");
    fgets(array, MAX_INPUT, stdin);

    int length = strlen(array);
    if (length > 0 && array[length - 1] == '\n') {
        length--;
    }

    for (int i = 0; i <= length - 1; ++i) {
        if(array[i] == ')') kostyl--;
        if(array[i] == '(') kostyl++;
        if (kostyl < 0){
            printf("Niepoprawny");
            return 0;
        }
    }

    if (kostyl > 0) {
        printf("Niepoprawny");
    } else {
        printf("Poprawny");
    }
    return 0;
}