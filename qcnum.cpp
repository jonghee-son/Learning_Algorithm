#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num[5];
    int res = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 5; i++) {
        res += pow(num[i], 2);
    }

    cout << res % 10 << '\n';

    return 0;
}