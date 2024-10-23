#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num = 0;
    int random_number = rand() % 100 + 0;
    int i = 10;
    while (i != 0){
        printf("Zgadnij:");
        scanf("%d",&num);
        if (num < random_number){
            printf("za malo\n");
        }if (num > random_number){
            printf("za duzo\n");
        }if (num == random_number){
            return printf("wygrales"),0;
        }
        i--;
    }
    printf("przegrales");
    return 0;
}