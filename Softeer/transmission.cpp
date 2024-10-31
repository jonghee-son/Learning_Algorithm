/*
 * Softeer 6283
 * 8-Speed transmission
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
        int gear = 0;
        int flag = 0;

        for (int i = 0; i < 8; i++) {
                int tmp;
                cin >> tmp;
                if (i == 0 && tmp == 1) {
                        flag = 1;
                        gear = tmp;
                        continue;
                }
                else if (i == 0 && tmp == 8) {
                        flag = -1;
                        gear = tmp;
                        continue;
                }
                else if (i == 0) {
                        gear = tmp;
                        break;
                }

                if (gear == tmp - 1 && flag == 1) {
                        flag = 1;
                        gear = tmp;
                        continue;
                }
                else if (gear == tmp + 1 && flag == -1) {
                        flag = -1;
                        gear = tmp;
                        continue;
                }
                else {
                        flag = 0;
                        break;
                }
        }

        if (flag == 1) {
                cout << "ascending";
        }
        else if (flag == -1) {
                cout << "descending";
        }
        else {
                cout << "mixed";
        }

        return 0;
}

