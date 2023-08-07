#include <stdio.h>

int min(int x, int y) {
    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int in;
    int dp[1000000];

    scanf("%d", &in);

    for (int i = 2; i <= in; i++) {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    printf("%d\n", dp[in]);

    return 0;
}