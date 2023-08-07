#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    int num;
    int arr[10001] = {0,};

    cin >> num;

    for (int i = 0; i < num; i++) {
        int in;
        cin >> in;
        arr[in] += 1;
    }

    for (int i = 1; i < 10001; i++) {
        int count = arr[i];

        while (count > 0) {
            cout << i << '\n';
            count--;
        }
    }

    return 0;
}