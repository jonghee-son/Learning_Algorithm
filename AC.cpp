#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    bool rev = false, err = false;
    int num_1, num_2;
    string command, input, value = "";
    deque<int> deq;

    cin >> num_1;

    while(num_1--) {
        rev = false;
        err = false;

        cin >> command >> num_2 >> input;

        for (int i = 0; i < input.length(); i++) {
            if (isdigit(input[i])) {
                value += input[i];
            }
            else {
                if (!value.empty()) {
                    deq.push_back(stoi(value));
                    value = "";
                }
            }
        }

        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'R') {
                if (rev == true) {
                    rev = false;
                }
                else {
                    rev = true;
                }
            }
            else if (command[i] == 'D') {
                if (deq.empty()) {
                    cout << "error" << '\n';
                    err = true;
                    break;
                }
                else if (rev == true) {
                    deq.pop_back();
                }
                else {
                    deq.pop_front();
                }
            }
            else {
                cout << "error" << '\n';
                err = true;
                break;
            }
        }

        if (err == false) {
            cout << '[';

            if (rev == true) {
                for (auto i = deq.rbegin(); i != deq.rend(); i++) {
                    if (i == deq.rend() - 1) {
                        cout << *i;
                    }
                    else {
                        cout << *i << ',';
                    }
                }
            }
            else {
                for (auto i = deq.begin(); i != deq.end(); i++) {
                    if (i == deq.end() - 1) {
                        cout << *i;
                    }
                    else {
                        cout << *i << ',';
                    }
                }
            }

            cout << ']' << '\n';
        }

        deq.clear();
    }

    return 0;
}