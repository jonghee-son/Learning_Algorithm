#include <iostream>
#include <string>
using namespace std;

int location(char x, string y) {
    for (int i = 0; i <= y.length(); i++) {
        if (y[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    string str;

    cin >> str;

    for (char i = 'a'; i <= 'z'; i++) {
        cout << location(i, str) << " ";
    }

    cout << '\n';

    return 0;
}