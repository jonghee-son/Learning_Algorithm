#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char str[6];

    while (1) {
        int flag = 1;

        scanf("%s", str);

        if (str[0] == '0') {
            break;
        }

        num = strlen(str);

        for (int i = 0; i < (num / 2); i++) {
            if (str[i] != str[num - 1 - i]) {
                flag = 0;
            }
        }

        if (flag == 1 || num == 1) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }

    return 0;
}