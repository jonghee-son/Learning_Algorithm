#include <stdio.h>

int main() {
    int cases, base_1, base_2, input, res, res_2;
    char input_arr[3];
    char output_arr[2];

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++) {
        scanf("%d %d %c%c", &base_1, &base_2, &input_arr[0], &input_arr[1]);

        if (input_arr[1] < 0x3A) {
            res = (input_arr[0] - 0x30) * base_1 + (input_arr[1] - 0x30);
        }
        else if (input_arr[1] > 0x40) {
            res = (input_arr[0] - 0x30) * base_1 + (input_arr[1] - 0x40) * 10;
        }

        output_arr[0] = (res / base_2 + 0x30);

        if (res % base_2 > 9) {
            output_arr[1] = (res % base_2 + 0x37);
        }
        else {
            output_arr[1] = (res % base_2 + 0x30);
        }

        if (output_arr[0] == '0') {
            printf("%c\n", output_arr[1]);
        }
        else {
            printf("%c%c\n", output_arr[0], output_arr[1]);
        }
    }

    return 0;
}