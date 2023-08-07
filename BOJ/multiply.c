#include <stdio.h>

int main() {
    int in_1, in_2, one, ten, hund;

    scanf("%d", &in_1);
    scanf("%d", &in_2);

    one = in_2 % 10;
    ten = in_2 / 10 % 10;
    hund = in_2 / 100;

    printf("%d\n%d\n%d\n%d\n", in_1 * one, in_1 * ten, in_1 * hund, in_1 * in_2);

    return 0;
}