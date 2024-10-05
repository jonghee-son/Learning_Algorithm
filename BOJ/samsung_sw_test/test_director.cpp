/*
 * BOJ 13458 Test Director
 */
#include <iostream>
using namespace std;

int main(void) {
	long long int num_place = 0;
	long long int* num_testee;
	long long int b = 0, c = 0;
	long long int res = 0;

	cin >> num_place;
	
	num_testee = new long long int[num_place];

	for (int i = 0; i < num_place; i++) {
		cin >> num_testee[i];
	}

	cin >> b >> c;

	for (int i = 0; i < num_place; i++) {
		int temp;

		if (num_testee[i] <= b) {
			res += 1;
		}
		else {
			temp = num_testee[i];
			temp -= b;
			res += 1;
			if (temp % c == 0) {
				res += (temp / c);
			}
			else {
				res += ((temp / c) + 1);
			}
		}
	}

	cout << res;
	delete[] num_testee;

	return 0;
}

