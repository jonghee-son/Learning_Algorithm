#include <stdio.h>

int main() {
    int n, k, a = 1, b = 1, c = 1;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        a *= i;
    }
    for (int i = 1; i <= k; i++) {
        b *= i;
    }
    for (int i = 1; i <= n - k; i++) {
        c *= i;
    }

    printf("%d\n", a / (b * c));

    return 0;
}