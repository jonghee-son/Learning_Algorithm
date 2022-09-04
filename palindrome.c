#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num, flag = 0;
    char * str;
    str = malloc(sizeof(char) * 100000);

    while (1) {
        scanf("%s", str);

        if (str[0] == '0') {
            break;
        }

        num = strlen(str);

        for (int i = 0; i < num / 2; i++) {
            if (str[i] == str[num - i - 1]) {
                flag = 1;
            }
            else {
                flag = 0;
            }
        }

        if (flag == 1) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }

    free(str);

    return 0;
}