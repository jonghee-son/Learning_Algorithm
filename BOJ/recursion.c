#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r) {
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s) {
    return recursion(s, 0, strlen(s)-1);
}

int recursionCount(const char *s, int l, int r) {
    int count = 1;

    for (int i = 0;;i++) {
        if (((l + i) < (r - i)) && (s[l + i] == s[r - i])) {
            count++;
        }
        else {
            break;
        }
    }

    return count;
}

int main() {
    int num;
    char str[1001];

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", str);

        printf("%d %d\n", isPalindrome(str), recursionCount(str, 0, strlen(str)-1));
    }

    return 0;
}