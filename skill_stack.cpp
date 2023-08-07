#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    stack<char> st_1;
    stack<char> st_2;
    int n, cnt=0;
    char c;

    cin >> n;
    st_1.push('I');
    st_1.push('I');

    for(int i = 0; i < n; i++) {
        cin >> c;

        switch(c) {
            case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': cnt++; break;
            case 'S' : st_1.push(c); break;
            case 'L' : st_2.push(c); break;
            case 'R' : if (st_2.top() == 'L') {cnt++; st_2.pop();} else goto fin; break;
            case 'K' : if (st_1.top() == 'S') {cnt++; st_1.pop();} else goto fin; break;
            default : cnt++;
        }
    }

    fin:
    cout << cnt << '\n';

    return 0;
}