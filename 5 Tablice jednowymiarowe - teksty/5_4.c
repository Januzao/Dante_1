#include <stdio.h>
#include <string.h>
int main() {
    char prywet[1001];
    printf("Podaj text do 1000:\n");
    fgets(prywet, sizeof(prywet), stdin);

    if (prywet[strlen(prywet)-1] == '\n'){
        (prywet[strlen(prywet)-1] = '\0');
    }
    int dlugosc = strlen(prywet);
    printf("%d", dlugosc);
    return 0;
}
