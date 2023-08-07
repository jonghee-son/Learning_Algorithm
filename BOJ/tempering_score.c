#include <stdio.h>
#include <stdlib.h>

int main() {
    int * score;
    float * new_score;
    float max = 0, sum;
    int num;

    scanf("%d", &num);

    score = malloc(sizeof(int) * num);
    new_score = malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < num; i++) {
        if (score[i] > max) {
            max = score[i];
        }
    }

    for (int i = 0; i < num; i++) {
        new_score[i] = score[i] / max * 100;
    }

    for (int i = 0; i < num; i++) {
        sum += new_score[i];
    }

    printf("%f\n", sum / num);

    return 0;
}