#include <iostream>
using namespace std;

int main() {
    int hour, minute, req;

    cin >> hour >> minute;
    cin >> req;

    minute += req;

    if (minute / 60 != 0) {
        hour += (minute / 60);
        minute %= 60;

        if (hour >= 24) {
            hour -= 24;
        }

        cout << hour << " " << minute << '\n';
    }
    else {
        cout << hour << " " << minute << '\n';
    }

    return 0;
}