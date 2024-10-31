#include <iostream>
using namespace std;

int main() {
	unsigned long long int K = 0, P = 0, N = 0;

	cin >> K >> P >> N;

	for (unsigned long long int i = 0; i < N ; i++) {
		K *= P;
		K %= 1000000007;
	}

	cout << K;

	return 0;
}
