#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int num, time = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int input;
        
        cin >> input;

        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    for (auto i = vec.begin(); i != vec.end(); i++) {
        int forward = 0;

        for (auto j = vec.begin(); j != i; j++) {
            forward += *j;
        }

        time += (forward + *i);
    }

    cout << time << '\n';

    return 0;
}