#include <stdio.h>

int main() {
    int n, k;
    int dp[1001][1001];

    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(i == j || j == 0){
                dp[i][j] = 1;
            }
            else
            	dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % 10007;
        }
    }

    printf("%d\n", dp[n][k]);

    return 0;
}