#include <iostream>
#include <math.h>
using namespace std;

int n, r, c;
int ans;

int find(int sz, int x, int y) {
    if (y == r && x == c) {
        cout << ans << '\n';

        return 0;
    }

    if (r < y + sz && r >= y && c < x + sz && c >= x) {
        find(sz / 2, x, y); // 1st quadrant
        find(sz / 2, sz / 2 + x, y); // 2nd quadrant
        find(sz / 2, x, sz / 2 + y); // 3rd quadrant
        find(sz / 2, sz / 2 + x, sz / 2 + y); //4th quadrant
    }
    else {
        ans += sz * sz;
    }

    return 0;
}

int main() {
    cin >> n >> r >> c;

    find(pow(2, n), 0, 0);

    return 0;
}