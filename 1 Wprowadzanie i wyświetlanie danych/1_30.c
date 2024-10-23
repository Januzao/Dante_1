#include <stdio.h>

int main() {
    int czas_in_sec;
    printf("Input number of seconds:");
    scanf("%d", &czas_in_sec);

    int godziny = czas_in_sec / 3600;
    int reszta = czas_in_sec % 3600;
    int minuty = reszta / 60;
    int sekundy = reszta % 60;

    printf("%02d:%02d:%02d\n", godziny, minuty, sekundy);

    return 0;
}
