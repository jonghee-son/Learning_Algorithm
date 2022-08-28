#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int * arr;
    int num, tmp;
    std::vector<int> vec;

    cin >> num;

    arr = new int[num];

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
        vec.push_back(arr[i]);
    }

    /*
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (arr[j + 1] < arr[j] && j + 1 < num) {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    */
    //bubble sort took too long

    sort(vec.begin(), vec.end());

    for (int i = 0; i < num; i++) {
        cout << vec[i] << '\n';
    }

    return (0);
}