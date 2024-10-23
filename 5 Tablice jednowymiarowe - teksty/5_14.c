#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];

    printf("Podaj tekst:\n");
    fgets(input, sizeof(input), stdin);

    int wordCount = 0;
    int wasLetter = 0;

    for (size_t i = 0; i < strlen(input); i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            wasLetter = 1;
        }
        else if (wasLetter) {
            wordCount++;
            wasLetter = 0;
        }
    }
    if (wasLetter) {
        wordCount++;
    }

    printf("%d\n", wordCount);

    return 0;
}

