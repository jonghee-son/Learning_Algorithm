#include <stdio.h>
#include <string.h>

int main() {
    int num, out = 0;
    char string[101];

    scanf("%d", &num);
    scanf("%s", &string);

    for (int i = 0; i < num; i++) {
        out += (string[i] - 0x30); 
    }

    printf("%d\n", out);

    return 0;
}