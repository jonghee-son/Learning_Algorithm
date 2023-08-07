#include <stdio.h>
#include <stdlib.h>

long long sum(int *a, int n) {
    long long res;

    for (int i = 0; i < n; i++) {
        res += a[i];
    }

    return res;
}

int main() {
    int quantity = 3000000;
    int * array = malloc(quantity);

    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++) {
        scanf("%d", &array[i]);
    }

    printf("%d", (int) sum(array, quantity));

    free(array);

    return 0;
}