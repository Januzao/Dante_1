#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int main() {
    char imie[11];
    printf("Podaj imie:\n");
    fgets(imie, sizeof(imie), stdin);

    size_t len = strlen(imie);
    if (len > 0 && imie[len - 1] == '\n') {
        imie[len - 1] = '\0';
    }
    len = strlen(imie);

    if (len > 0) {
        char lastletter = imie[len - 1];

        if (lastletter == 'a' || lastletter == 'A') {
            printf("Imie zenskie\n");
        } else {
            printf("Imie meskie\n");
        }
    }

    return 0;
}

