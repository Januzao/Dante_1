#include <stdio.h>

int main() {
    char input[1001];
    int s;

    printf("Podaj Tekst:\n");
    fgets(input, sizeof(input), stdin);
    printf("Podaj znak kodowy:\n");
    scanf("%d", &s);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = ((input[i] - 'A' + s) % 26) + 'A';
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = ((input[i] - 'a' + s) % 26) + 'a';
        }
    }
    printf("%s", input);

    return 0;
}
