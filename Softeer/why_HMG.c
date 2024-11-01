/*
* Softeer sample test
* Why HMG is HMG?
* 2024.10 Hyundai Autoever coding test
*/
#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<char> abbr;
    bool flag = false;
    string inp;

    cin >> inp;

    abbr.push_back(inp.at(0));

    for (int i = 1; i < inp.size(); i++) {
        if (inp.at(i) == '-') {
            flag = true;
            continue;
        }

        if (flag == true) {
            abbr.push_back(inp.at(i));
            flag = false;
        }
    }

    for (int i = 0; i < abbr.size(); i++) {
        cout << abbr.at(i);
    }

    return 0;
}