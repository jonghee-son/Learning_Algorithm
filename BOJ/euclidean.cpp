#include <iostream>
using namespace std;

int euclidean(int a, int b) {
    int r = a % b;

    if (r == 0) {
        return b;
    }

    return euclidean(b, r);
}

int main() {
    int a, b;

    cin >> a >> b;

    cout << euclidean(a, b) << '\n' << (a * b) / euclidean(a, b) << '\n';

    return 0;
}