#include <iostream>
using namespace std;

int isPrime(int x) {
	if (x == 1) {
		return 0;
    }

	for (int i = 2; (i * i) <= x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main() {
    int num;

    while (1) {
        int res = 0;
        cin >> num;

        if (num == 0) {
            break;
        }

        for (int i = num + 1; i <= 2 * num; i++) {
            if (isPrime(i)) {
                res++;
            }
        }

        cout << res << '\n';
    }

    return 0;
}