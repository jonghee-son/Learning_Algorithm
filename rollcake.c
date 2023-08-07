#include <stdio.h>
#include <stdlib.h>

int main() {
    int length = 1000;
    int observer = 1000;
    int counter[1000] = {0, };
    int flag = 0;
    int flag_2 = 0;
    int flag_3 = 0;
    int flag_1 = 0;
    int cake[1000] = {0, };
    int i[1000][2];

    scanf("%d", &length);
    scanf("%d", &observer);

    for (int k = 0; k < observer; k++) {
        scanf("%d %d", &i[k][0], &i[k][1]);
    }

    for (int k = 0; k < observer; k++) {
        if ((k + 1) < observer) {
            if ((((i[k][1] - i[k][0]) + 1) >= ((i[k+1][1] - i[k+1][0]) + 1)) && (((i[k][1] - i[k][0]) + 1) > flag_1)) {
                flag_1 = ((i[k][1] - i[k][0]) + 1);
                flag = k + 1;
            }
        }
        else if ((k + 1) >= observer) {
            if ((((i[k][1] - i[k][0]) + 1) > flag_1)) {
                flag = k + 1;
            }
        }
    }

    for (int k = 0; k < observer; k++) {
        for (int z = (i[k][0] - 1); z <= (i[k][1] - 1); z++) {
            if (cake[z] == 0) {
                cake[z] = k + 1;
            }
        }
    }

    for (int z = 0; z < observer; z++) {
        for (int k = 0; k < length; k++) {
            if (cake[k] == (z + 1)) {
                counter[z] += 1;
            }
        }
    }

    for (int k = 0; k < observer; k++) {
        if ((k + 1) < observer) {
            if (counter[k] >= counter[k+1] && counter[k] > flag_3) {
                flag_3 = counter[k];
                flag_2 = k + 1;
            }
        }
        else if ((k + 1) >= observer) {
            if (counter[k] > flag_3) {
                flag_3 = counter[k];
                flag_2 = k + 1;
            }
        }
    }

    printf("%d\n", flag);
    printf("%d\n", flag_2);
    
    return 0;
}