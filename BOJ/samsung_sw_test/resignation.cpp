/*
 * BOJ 14501 Resignation
 */
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int day = 0;
	int* req_time;
	int* payment;
	int max_pay = 0;
	int* max_arr;

	cin >> day;

	req_time = new int[day + 1];
	payment = new int[day + 1];
	max_arr = new int[day + 1];

	for (int i = 0; i < day; i++) {
		cin >> req_time[i] >> payment[i];
	}

	for (int i = 0; i <= day; i++) {
		max_arr[i] = max(max_pay, max_arr[i]);
		if (req_time[i] + i <= day) {
			max_arr[i + req_time[i]] = max(max_arr[i + req_time[i]], payment[i] + max_arr[i]);
		}
		max_pay = max(max_pay, max_arr[i]);
	}

	cout << max_pay;

	delete[] req_time; delete[] payment; delete max_arr;

	return 0;
}

