#include <stdio.h>

int main() {
    int a, b, c, res;
    char str[10] = {0, };

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    res = a * b * c;

    while (res > 0) {
        str[res % 10] += 1;
        res /= 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", str[i]);
    }

    return 0;
}