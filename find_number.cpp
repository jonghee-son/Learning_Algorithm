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
    int num_1 = 0;
    int num_2 = 0;
    vector<int> vec;

    cin >> num_1;

    for (int i = 0; i < num_1; i++) {
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    cin >> num_2;

    for (int i = 0; i < num_2; i++) {
        int ans = 0;
        cin >> ans;

        cout << binarySearch(vec, ans, num_1) << '\n';
    }

    return 0;
}