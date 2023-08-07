#include <iostream>
#include <vector>
using namespace std;

vector<int> list[101];
bool check[101];
int count = 0;

int dfsSearch(int x) {
    check[x] = true;

    for (int i = 0; i < list[x].size(); i++) {
        int y = list[x][i];

        if (!check[y]) {
            dfsSearch(y);
            count++;
        }
    }

    return 0;
}

int main() {
    int com, pair;

    cin >> com >> pair;

    for (int i = 0; i < pair; i++) {
        int one, two;

        cin >> one >> two;

        list[one].push_back(two);
        list[two].push_back(one);
    }

    dfsSearch(1);

    cout << count << '\n';

    return 0;
}