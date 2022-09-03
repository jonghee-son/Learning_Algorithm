#include <stdio.h>

int main() {
    int in[8], count = 4;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &in[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (in[i] == i+1 && in[i] + in[7 - i] == 9) {
            count += 1;
        }
        else if (in[7-i] ==  i+1 && in[i] + in[7-i] == 9) {
            count -= 1;
        }
    }

    if (count == 8) {
        printf("ascending\n");
    }
    else if (count == 0) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }

    return 0;
}