#include <iostream>
using namespace std;

int main() {
    int num;
    int score[100] = {0, };
    int res = 0;
    char ans[100] = {'X',};

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> ans;

        for (int j = 0; j < 100; j++) {
            if (ans[j] == 'O') {
                score[j] += 1;
                if (j - 1 >= 0 && ans[j - 1] == 'O') {
                    score[j] = score[j - 1] + 1;
                }
            }
        }

        for (int j = 0; j < 100; j++) {
            res += score[j];
        }

        cout << res << '\n';

        for (int j = 0; j < 100; j++) {
           score[j] = 0;
           ans[j] = 'X';
        }

        res = 0;
    }

    return 0;
}