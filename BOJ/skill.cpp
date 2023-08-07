#include <iostream>
using namespace std;

int use(char x, int y, int z) {
    if (x == 'S') {
        return 2;
    }
    else if (x == 'L') {
        return 3;
    }
    else if (x == 'K') {
        if (y > 0) {
            return 4;
        }
        else {
            return -1;
        }
    }
    else if (x == 'R') {
        if (z > 0) {
            return 5;
        }
        else {
            return -1;
        }
    }
    else {
        return 1;
    }
}

int main() {
    int num, count, s_count = 0, l_count = 0;
    char in;

    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> in;

        if (use(in, s_count, l_count) == -1) {
            break;
        }
        else if (use(in, s_count, l_count) == 2) {
            s_count++;
        }
        else if (use(in, s_count, l_count) == 3) {
            l_count++;
        }
        else if (use(in, s_count, l_count) == 4) {
            count += 1;
            s_count--;
        }
        else if (use(in, s_count, l_count) == 5) {
            count += 1;
            l_count--;
        }
        else {
            count += 1;
        }
    }

    cout << count << '\n';

    return 0;
}