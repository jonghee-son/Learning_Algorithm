#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //takes 88ms to execute
    int quant, res, fin_level, tmp, num;
    float rnd, level;
    vector <int> vec;
    
    cin >> quant;

    if (quant == 0) {
        cout << 0 << '\n';

        return (0);
    }

    for (int i = 0; i < quant; i++) {
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    rnd = (float)quant * 15 / 100;

    res = round(rnd);

    for (int i = res; i < quant - res; i++) {
        level += vec[i];
    }

    level /= (quant - 2 * res);
    fin_level = round(level);

    cout << fin_level << '\n';

    return (0);
}