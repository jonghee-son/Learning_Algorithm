#include <iostream>
using namespace std;

int main() {
    int a, b, v, count;

    cin >> a >> b >> v;

    count = (v - b - 1) / (a - b) + 1;

    cout << count << '\n';

    return 0;
}