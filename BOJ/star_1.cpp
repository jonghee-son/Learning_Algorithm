#include <iostream>
using namespace std;

int main() {
	int a, i, j, k = 0;	
	
	cin >> a;

	for (i = 1; i <= a; i++) {
		for (j = 0; j < a - i; j++) {
			cout << ' ';
		}

		for (k = 0; k < i; k++) {
			cout << '*';
		}

		cout << '\n';
	}

	return (0);
}
