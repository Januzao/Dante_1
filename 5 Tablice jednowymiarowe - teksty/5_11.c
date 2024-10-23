#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 1001
#define LICZBA_MAKSYMALNA 100

void processExpression(char *exp) {
    long results[LICZBA_MAKSYMALNA] = {0};
    int count = 0;
    int number = 0;
    int expressionLength = strlen(exp);

    for (int i = 0; i < expressionLength; ++i) {
        if (isdigit(exp[i])) {
            number = number * 10 + (exp[i] - '0');
        } else if (exp[i] == '-') {
            results[count] += number;
            number = 0;
        } else if (exp[i] == '|') {
            results[count++] += number;
            number = 0;
        } else {
            printf("Incorrect input\n");
            exit(1);
        }
    }
    if (number != 0) {
        results[count] += number;
    }

    for (int i = 0; i <= count; ++i) {
        printf("%ld ", results[i]);
    }
    printf("\n");
}


int main() {
    char input[MAX_INPUT_LENGTH];

    printf("Podaj wyrazenie:\n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strlen(input) > 1000) {
        printf("Input is too long\n");
        return 2;
    }
    processExpression(input);
    return 0;
}
