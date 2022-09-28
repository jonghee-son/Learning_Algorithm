#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int cases, base_1, base_2;
    int mid = 0;
    string input;
    deque<char> output;

    cin >> cases;

    while (cases--) {
        cin >> base_1 >> base_2 >> input;

        for (int i = 0; i < input.length(); i++) {
            if (input[i] < 0x3A) {
                mid += (input[i] - 0x30) * pow(base_1, input.length() - 1 - i);
            }
            else {
                mid += (input[i] - 0x37) * pow(base_1, input.length() - 1 - i);
            }
        }

        while (mid > 0) {
            if (mid % base_2 > 9) {
                output.push_front((char)((mid % base_2) + 0x37));
            }
            else {
                output.push_front((char)((mid % base_2) + 0x30));
            }

            mid /= base_2;
        }

        for (int i = 0; i < output.size(); i++) {
            cout << output.at(i);
        }
        cout << '\n';

        output.clear();
        input.clear();
    }

    return 0;
}