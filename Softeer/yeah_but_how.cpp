/*
 * Softeer 9498
 * Yeah, but How?
 */
#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv) {
        string input_str;
        stack<char> checker;
        vector<char> res;

        cin >> input_str;

        for (int i = 0; i < input_str.size(); i++) {
                if (input_str.at(i) == ')') {
                        res.push_back('1');
                        res.push_back(')');
                        res.push_back('+');
                }
                else {
                        res.push_back('(');
                }

                if (i > 1) {
                        if (input_str.at(i - 1) == '+' && input_str.at(i) == ')') {
                                res.pop_back();
                                res.push_back(')');
                                res.push_back('+');
                        }
                }
        }

        res.pop_back();

        for (int i = 0; i < res.size(); i++) {
                cout << res.at(i);
        }

        return 0;
}

