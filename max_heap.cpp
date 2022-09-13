#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int num;

    cin >> num;

    while(num--) {
        int input;
        cin >> input;

        if (input != 0) {
            pq.push(input);
        }
        else {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            }
            else {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}