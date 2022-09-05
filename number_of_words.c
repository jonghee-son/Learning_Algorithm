#include <stdio.h>
#include <string.h>

int main(){
    char str[1000005];
    int ans = 0;

    scanf("%[^\n]s", str);

    if(str[0]!=' ') {
        ans++;
    }

    for(int i = 1; i < strlen(str); i++) {
        if(str[i-1] == ' ' && str[i] != ' ') {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}