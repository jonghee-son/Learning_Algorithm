#include <iostream>

using namespace std;

int main() {
    int quantity, a, b;

    cin >> quantity;

    for (int i = 1; i <= quantity; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
    }

    return (0);
}