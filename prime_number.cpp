#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int num_1, num_2, res = 0;
    vector<int> vec;

    cin >> num_1 >> num_2;

    for (int i = num_1; i <= num_2; i++) {
        int flag = 1;

        if (i == 1) {
            flag = 0;
            goto end;
        }

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        end:
        if (flag == 1) {
            vec.push_back(i);
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        res += vec.at(i);
    }

    if (res > 0) {
        cout << res << '\n' << vec.at(0) << '\n';
    }
    else if (res == 0) {
        cout << -1 << '\n';
    }

    return 0;
}