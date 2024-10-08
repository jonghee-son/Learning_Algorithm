#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int convertTodec(const char * input_arr, int base_1) {
    int res;

    for (int i = 0; i < strlen(input_arr); i++) {
        if (i == strlen(input_arr) - 1) {
            if (input_arr[i] < 0x3A) {
                res += (input_arr[i] - 0x30);
            }
            else if (input_arr[i] > 0x40) {
                res += (input_arr[i] - 0x40);
            }
        }
        else {
            if (input_arr[i] < 0x3A) {
                res += (input_arr[i] - 0x30) * base_1 * (pow(10, strlen(input_arr)) / pow(10, i + 2));
            }
            else if (input_arr[i] > 0x40) {
                res += (input_arr[i] - 0x40) * base_1 * (pow(10, strlen(input_arr)) / pow(10, i + 2));
            }
        }
    }

    return res;
}

void convertFromdec(const char * input_arr, int res, int base_2) {
    char* output_arr;
    output_arr = malloc(sizeof(int) * strlen(input_arr));

    for (int i = strlen(input_arr); i >= 0; i--) {
        if (res % base_2 > 9) {
            output_arr[i] = (char)((res % base_2) + 0x37);
        }
        else {
            output_arr[i] = (char)((res % base_2) + 0x30);
        }

        res /= base_2;
    }

    printf("%s\n", output_arr);

    free(output_arr);
}

int main() {
    int cases, base_1, base_2, res;
    char input_arr[20];
    char* output_arr;

    scanf("%d", &cases);

    while (cases--) {
        res = 0;

        scanf("%d %d %s", &base_1, &base_2, input_arr);
        output_arr = malloc(sizeof(char) * strlen(input_arr));

        if (base_1 != 10) {
            res = convertTodec(input_arr, base_1);
        }
        else {
            for (int i = 0; i < strlen(input_arr); i++) {
                res += (input_arr[i] - 0x30) * pow(10, strlen(input_arr) - 1 - i);
            }
        }

        if (base_2 == 10) {
            printf("%d\n", res);
        }
        else {
            convertFromdec(input_arr, res, base_2);
        }

        free(output_arr);
    }

    return 0;
}