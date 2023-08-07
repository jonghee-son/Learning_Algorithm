#include <iostream>
using namespace std;

int delivery(int x) {
    int i = 0, j = 0, res = 5000;

    for (i = 0; i < 5000; i++) {
        if (i * 3 <= x) {
            for (j = 0; j < 5000; j++) {
                if (i * 3 + j * 5 == x && i + j <= res) {
                    res = i + j;
                }
            }
        }
        else {
            break;
        }
    }

    if (res < 5000) {
        return res;
    }
    else {
        return -1;
    }
}

int main() {
    int weight;

    cin >> weight;

    cout << delivery(weight) << '\n';

    return 0;
}