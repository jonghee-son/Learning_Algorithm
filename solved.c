#include <stdio.h>
#include <stdlib.h>

int main() {
    //takes too long (over 1s)
    int quant, res, fin_level, tmp;
    float rnd, level;
    
    scanf("%d", &quant);

    if (quant == 0) {
        printf("%d\n", 0);

        return 0;
    }

    int * num = malloc(quant * 10);

    for (int i = 0; i < quant; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < quant; i++) {
        for (int j = 0; j < quant; j++) {
            if (num[j + 1] < num[j] && (j + 1) < quant) {
                tmp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = tmp;
            }
        }
    }

    rnd = (float)quant * 15 / 100;

    res = (int)(rnd + 0.5);

    for (int i = res; i < quant - res; i++) {
        level += num[i];
    }

    level /= (quant - 2 * res);
    fin_level = (int)(level + 0.5);

    printf("%d\n", fin_level);

    return 0;
}