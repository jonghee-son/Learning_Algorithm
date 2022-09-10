#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int frequentNum(int* x) {
    int count = 0, res;

    for (int i = 0; i < 8001; i++) {
        if (x[i] > count) {
            count = x[i];
            res = i;
        }
    }

    for (int i = res + 1; i < 8001; i++)
	{
		if (x[i] == count)
		{
			res = i;
			break;
		}
	}

    return (res - 4000);
}

int main() {
    int num, avg = 0, cent, freq, sz;
    int count[8001] = {0,};
    vector<int> vec;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int input;

        cin >> input;

        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < num; i++) {
        avg += vec.at(i);
        count[vec.at(i) + 4000]++;
    }

    avg = round(double(avg) / num);
    freq = frequentNum(count);
    cent = vec.at(num/2);
    sz = vec.at(num - 1) - vec.at(0);

    cout << avg << '\n' << cent << '\n' << freq << '\n' << sz << '\n';

    return 0;
}