#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int ans;

        cin >> ans;
        
        if (ans / 2 == 1 || ans / 3 == 1 || (ans % 2 != 0 && ans % 3 != 0)) {
            if (ans != 1) {
                count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}