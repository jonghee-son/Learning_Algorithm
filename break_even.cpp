#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (b < c) {
        int res = a / (c - b) + 1;

        cout << res << '\n';
    }
    else {
        cout << -1 << '\n';
    }

    return 0;
}