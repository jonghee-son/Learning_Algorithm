#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num;
    int count;

    cin >> num;

    count = num;

    for (int i = 0; i < num; i++) {
        int ans;

        cin >> ans;

        if (ans == 1) {
            count--;
        }
        
        for(int j = 2; j <= sqrt(ans); j++) {
            if(ans % j == 0) {
                count--;
                break;
            }
        }
    }

    cout << count << '\n';

    return 0;
}