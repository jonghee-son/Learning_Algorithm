#include <iostream>
using namespace std;

int main() {
    int a, b, c, cost;

    cin >> a >> b >> c;

    if (b < c) {
        int res = a / (c - b) + 1;

        cout << res << '\n';

        return 0;
    }
    else {
        cout << -1 << '\n';

        return -1;
    }

    return 0;
}