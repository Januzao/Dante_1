#include <stdio.h>

int main() {
    int arr[26];
    arr[0] = 65;

    for (int i = 0; i < 26; ++i) {
        arr[i] = i + 65;
    }
    for (int i = 0; i < 26; ++i) {
        printf("%d %c %c\n", arr[i], arr[i], arr[i] + 32);
    }
    return 0;
}