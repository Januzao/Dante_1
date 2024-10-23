#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int losowaLiczba = rand();
    printf("Losowa liczba: %d\n", losowaLiczba);

    return 0;
}
