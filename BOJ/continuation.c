#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digit(int x) {
    if (x >= 100000000) {
        return 9;
    }
    else if (x >= 10000000) {
        return 8;
    }
    else if (x >= 1000000) {
        return 7;
    }
    else if (x >= 100000) {
        return 6;
    }
    else if (x >= 10000) {
        return 5;
    }
    else if (x >= 1000) {
        return 4;
    }
    else if (x >= 100) {
        return 3;
    }
    else if (x >= 10) {
        return 2;
    }
    else {
        return 1;
    }
}

int comPute(int x) {
    int res = 1;
    int * element;

    element = malloc(digit(x) * sizeof(int));

    for (int i = 0; i < digit(x); i++) {
        if (i == 0) {
            element[i] = x % 10;
        }
        else if ((x / (int)pow(10, i)) >= 10) {
            element[i] = (x / (int)pow(10, i)) - (x / ((int)pow(10, (i + 1))) * 10);
        }
        else {
            element[i] = x / (int)pow(10, i);
        }
    }

    for (int i = 0; i < digit(x); i++) {
        res *= element[i];
    }

    free(element);

    return res;
}

int main() {
    int num, count = 1, res;

    scanf("%d", &num);

    if (num < 10) {
        printf("%d\n", 0);

        return 0;
    }

    res = comPute(num);

    while (res >= 10) {
        res = comPute(res);
        count++;
    }

    printf("%d\n", count);

    return 0;
}