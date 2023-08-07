#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int num, num_1, sum, count = 0;
    int * grade;
    float average, percentage;

    cin >> num;

    for (int i = 0; i < num; i++) {
        sum = 0;
        count = 0;
        cin >> num_1;

        grade = new int[num_1];

        for (int j = 0; j < num_1; j++) {
            cin >> grade[j];
            sum += grade[j];
        } 

        average = (float)sum / (float)num_1;

        for (int j = 0; j < num_1; j++) {
            if (grade[j] > average) {
                count++;
            }
        }

        percentage = ((float)count / (float)num_1) * 100;

        printf("%.3f", percentage);
        cout << '%' << '\n';

        for (int j = 0; j < num_1; j++) {
            grade[j] = 0;
        } 
    }

    return (0);
}