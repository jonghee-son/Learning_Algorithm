#include <iostream>
using namespace std;

int main() {
    int num_1 = 0;
    int num_2 = 0;
    int ans = 0;
    int * arr_1;

    cin >> num_1;
    arr_1 = new int[num_1];

    for (int i = 0; i < num_1; i++) {
        cin >> arr_1[i];
    }

    cin >> num_2;

    for (int i = 0; i < num_2; i++) {
        int flag = 0;
        cin >> ans;

        for (int j = 0; j < num_1; j++) {
            if (ans == arr_1[j]) {
                flag = 1;
                break;
            }
        }

        cout << flag << '\n';
    }

    return 0;
}