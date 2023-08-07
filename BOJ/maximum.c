#include <stdio.h>

int main() {
    int num[9], res = 0, seat;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 9; i++) {
        if (num[i] > res) {
            res = num[i];
            seat = i + 1;
        }
    }

    printf("%d\n%d\n", res, seat);

    return 0;
}