#include <iostream>
using namespace std;

int main() {
    int num, num_org, ten, one, count = 0;

    cin >> num;
    num_org = num;

    if (num == 0) {
        cout << 1 << '\n';
        return (0);
    }

    for (;;) {
        num = ((num % 10) * 10) + (((num / 10) + (num % 10)) % 10);
        count++;
        if (num == num_org) {
            break;
        }
    }

    cout << count << '\n';

    return (0);
}