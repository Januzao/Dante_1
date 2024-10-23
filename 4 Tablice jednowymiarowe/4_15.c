#include <stdio.h>

int main() {
    int arr[1000];
    printf("podaj liczby: ");
    int n = 0;
    for (int i = 0; i < 1000; ++i) {
        if (scanf("%d",&arr[i])!= 1) return printf("Incorrect input"),1;
        if (arr[i] == 0)break;
        n++;
    }
    if (n < 2)return printf("not enough data available"),2;
    for (int i = 0; i < n-1; ++i) {
        printf("%.2f ",(float )(arr[i] + arr[i+1])/2);
    }
    return 0;
}
