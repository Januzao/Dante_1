#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkPrime(int N)
{
    int flag = 1;
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int num;
    printf("Podaj liczbe calkowita: ");
    if  (scanf("%d",&num) != 1) return printf("Incorrect input"),1;
    if (num <= 1) return printf("NO"),0;
    if (checkPrime(num) == true){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
