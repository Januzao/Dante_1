#include <stdio.h>
#include <string.h>

int main() {
    char tekst[1001];
    printf("Podaj tekst:\n");
    fgets(tekst, sizeof(tekst), stdin);

    int samogloski = 0;
    int vowels[256] = {0};

    size_t i;
    for (i = 0; i < strlen(tekst); i++) {
        switch (tekst[i]) {
            case 'a':
            case 'e':
            case 'y':
            case 'Y':
            case 'u':
            case 'i':
            case 'o':
            case 'A':
            case 'E':
            case 'U':
            case 'I':
            case 'O':
                if (!vowels[(unsigned char) tekst[i]]) {
                    vowels[(unsigned char) tekst[i]] = 1;
                    samogloski++;
                }
                break;
            case 5:
            case 25:
            case -13:
            case 4:
            case 24:
            case -45:
                if (!vowels[(unsigned char) tekst[i]]) {
                    vowels[(unsigned char) tekst[i]] = 1;
                    samogloski++;
                }
                break;
            default:
                break;
        }
    }
    printf("%d\n", samogloski);
    return 0;
}
