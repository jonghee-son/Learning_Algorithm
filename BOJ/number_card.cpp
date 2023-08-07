#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> &a, int x, int y) {
    int low = 0, high = y - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x == a.at(mid)) {
            return 1;
        }
        else if (x < a.at(mid)) {
            high = mid - 1;
        }
        else if (x > a.at(mid)) {
            low = mid + 1;
        }
    }

    return 0;
}

int main() {
    int num, num_2;
    vector<int> vec;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int input;

        cin >> input;

        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    cin >> num_2;

    for (int i = 0; i < num_2; i++) {
        int input;
        cin >> input;

        cout << binarySearch(vec, input, num) << " ";
    }

    cout << '\n';

    return 0;
}