#include <stdio.h>

int main() {
    int quantity, a, b;

    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}