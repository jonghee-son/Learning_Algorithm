#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<char> vec;
    string str;
    int num;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int open_count = 0, close_count = 0;

        cin >> str;

        for (int j = 0; j < str.length(); j++) {
            vec.push_back(str[j]);
        }

        for (int j = 0; j < str.length(); j++) {
            if (vec.at(j) == '(' && close_count <= open_count) {
                open_count++;
            }
            else if (vec.at(j) == ')' && open_count >= close_count) {
                close_count++;
            }
        }

        if (open_count == close_count && open_count != 0) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }

        for (int j = 0; j < str.length(); j++) {
            vec.pop_back();
        }
    }

    return 0;
}