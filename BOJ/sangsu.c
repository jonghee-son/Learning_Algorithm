#include <stdio.h>

int reverseNumber(int x) {
    int result = 0;
    while (x > 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = reverseNumber(a);
    b = reverseNumber(b);

    if (a > b) {
        printf("%d\n", a);
    }
    else {
        printf("%d\n", b);
    }

    return 0;
}