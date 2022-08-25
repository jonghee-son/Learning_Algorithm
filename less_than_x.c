#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    

    scanf("%d %d", &a, &b);

    int* arr = malloc(a * 6);

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++) {
        if (arr[i] < b) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}