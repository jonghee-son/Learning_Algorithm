#include <stdio.h>

int main() {
    int num[10], res[42] = {0,}, ans;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        res[num[i] % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        ans += res[i];
    }

    printf("%d\n", ans);

    return 0;
}