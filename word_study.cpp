#include <iostream>
using namespace std;

int countWord(string x, char y) {
    int res = 0;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] == y) {
            res += 1;
        }
    }

    return res;
}

int main() {
    string str;
    int max[27] = {0,};
    char res;
    int fin = 0;

    cin >> str;

    for (char i = 'A'; i <= 'Z'; i++) {
        max[(int)(i - 64)] += countWord(str, i);
    }

    for (char i = 'a'; i <= 'z'; i++) {
        max[(int)(i - 96)] += countWord(str, i);
    }

    for (int i = 1; i <= 26; i++) {
        if (max[i] > fin) {
            fin = max[i];
            res = (char)(64 + i);
        }
        else if (max[i] == fin) {
            res = '?';
        }
    }

    cout << res << '\n';

    return 0;
}