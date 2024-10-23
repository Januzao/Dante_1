#include <stdio.h>
#include <string.h>
#include <ctype.h>

void empty_fun() {
}

#define MAX_INPUT 1001

int main() {
    char rel[MAX_INPUT];
    int alphaLen = 0, output[MAX_INPUT] = {0};

    printf("Podaj tekst:");
    fgets(rel, MAX_INPUT, stdin);

    int len = strlen(rel);
    if (len > 0 && rel[len - 1] == '\n') {
        len--;
    }

    for (int i = 0; i <= len - 1; i++) {
        if (isalpha(rel[i])){
            alphaLen++;
            if (!isalpha(rel[i+1])){
                output[alphaLen]++;
                alphaLen = 0;
            } else {
                if (i == len - 1){
                    output[alphaLen]++;
                }
            }
        }

    }
    for (int i = 0; i < MAX_INPUT; ++i) {
        if (output[i] != 0){
            printf("%d - %d\n",i,output[i]);
        }
    }

    return 0;
}