#include <iostream>
#include <string>
using namespace std;

int repeat(int x, string arr) {
    for (int i = 0; i < arr.length(); i++) {
        for (int j = 0; j < x; j++) {
            cout << arr[i];
        }
    }

    return 0;
}

int main() {
    int num, rpt;
    string str;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> rpt >> str;

        repeat(rpt, str);
        cout << '\n';
    }

    return 0;
}