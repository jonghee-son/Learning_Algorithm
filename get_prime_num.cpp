#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int begin, end, flag = 1;;

    cin >> begin >> end;

    for (int i = begin; i <= end; i++) {
        flag = 1;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0 | i == 1) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            cout << i << '\n';
        }
    }

    return 0;
}