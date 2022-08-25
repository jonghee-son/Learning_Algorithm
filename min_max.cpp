#include <iostream>
using namespace std;

int main() {
    int num, tmp;
    int min = 1000001;
    int max = -1000001;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> tmp;

        if (tmp > max) {
            max = tmp;
        }
        
        if (tmp < min) {
            min = tmp;
        }
    }

    cout << min << " " << max << '\n';

    return (0);
}