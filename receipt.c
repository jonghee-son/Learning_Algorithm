#include <stdio.h>

int main() {
    int whole = 0, quantity = 0, res = 0, a = 0, b = 0;

    scanf("%d", &whole);
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++) {
        scanf("%d %d", &a, &b);
        res += a * b;
    }

    if (res == whole) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}