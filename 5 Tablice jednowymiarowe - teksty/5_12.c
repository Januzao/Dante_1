#include <stdio.h>
#include <string.h>

#define ZNAK 101
#define OPERATION '+'
int main() {
    char input[ZNAK];
    int result = 0;
    int current_number = 0;
    char operation = OPERATION;

    printf("Podaj tekst: ");
    fgets(input, sizeof(input), stdin);
    size_t input_length = strlen(input);
    if (input[input_length - 1] == '\n') {
        input[input_length - 1] = '\0';
    }

    if (strlen(input) > 100) {
        printf("Dlugosc wejscia przekracza 100 znakow.\n");
        return 1;
    }


    for (size_t i = 0; i < strlen(input); ++i) {
        char current_char = input[i];

        if ((current_char >= '0' && current_char <= '9') || current_char == OPERATION || current_char == '-') {
            if (current_char == OPERATION || current_char == '-') {
                if (operation == OPERATION) {
                    result += current_number;
                } else if (operation == '-') {
                    result -= current_number;
                }

                current_number = 0;
                operation = current_char;
            } else {
                current_number = current_number * 10 + (current_char - '0');
            }
        } else {
            printf("Incorrect input\n");
            return 1;
        }
    }

    if (operation == OPERATION) {
        result += current_number;
    } else if (operation == '-') {
        result -= current_number;
    }

    printf("%d\n", result);

    return 0;
}
