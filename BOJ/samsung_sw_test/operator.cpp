/*
 * BOJ 14888
 */
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
int ope[4] = {0, };

long long int max_num = -1000000000, min_num = 1000000000;

int calc(int ite, long long int comp) {
	if (ite == n - 1) {
		max_num = max(max_num, comp);
		min_num = min(min_num, comp);

		return 0;
	}

	if (ope[0] != 0) {
		ope[0]--;
		calc(ite + 1, comp + a[ite + 1]);
		ope[0]++;
	}
	if (ope[1] != 0) {
		ope[1]--;
		calc(ite + 1, comp - a[ite + 1]);
		ope[1]++;
	}
	if (ope[2] != 0) {
		ope[2]--;
		calc(ite + 1, comp * a[ite + 1]);
		ope[2]++;
	}
	if (ope[3] != 0) {
		ope[3]--;
		calc(ite + 1, comp / a[ite + 1]);
		ope[3]++;
	}

	return 0;
}

int main(void) {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}

	for (int i = 0; i < 4; i++) {
		cin >> ope[i];
	}

	calc(0, a[0]);

	cout << max_num << '\n' << min_num;
}

