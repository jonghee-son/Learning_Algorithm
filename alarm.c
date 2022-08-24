#include <stdio.h>

int main() {
    int h, m, rm;

    scanf("%d %d", &h, &m);

    if ((45 - m) <= 0) {
        printf("%d %d\n", h, (m-45));
    }
    else {
        rm = m + 15;

        if (h - 1 < 0) {
            h += 23;
            printf("%d %d\n", h, rm);
        }
        else {
            h -= 1;
            printf("%d %d\n", h, rm);
        }
    }

    return 0;
}