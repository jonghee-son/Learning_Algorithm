#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int num = 0, cnt = 0;

    cin >> num;

    while (num != 0) {
        vec.push_back(num % 10);
        num /= 10;
        cnt++;
    }

    sort(vec.begin(), vec.end(), greater<int>());

    for (int i = 0; i < cnt; i++) {
        cout << vec.at(i);
    }

    cout << '\n';

    return 0;
}
