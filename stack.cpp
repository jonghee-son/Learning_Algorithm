#include <iostream>
#include <string>
using namespace std;

class stack {
    private:
        int queue[10000] = {0, };
        int num = 0;
    public:
        int push(int x) {
            this->queue[this->num] += x;
            this->num++;

            return (0);
        }

        int pop() {
            int x = this->queue[num - 1];
            if (x != 0) {
                this->queue[num - 1] = 0;
                this->num--;

                return (x);
            }
            else {
                return (-1);
            }
        }

        int size() {
            int x = 0;

            for (int i = 0; i <= num; i++) {
                if (this->queue[i] != 0) {
                    x++;
                }
                else {
                    continue;
                }
            }

            return (x);
        }

        int empty() {
            int x = 0;

            for (int i = 0; i <= num; i++) {
                if (this->queue[i] != 0) {
                    x++;
                }
                else {
                    continue;
                }
            }

            if (x == 0) {
                return 1;
            }
            else {
                return (0);
            }
        }

        int top() {
            int x = this->queue[num - 1];

            if (x != 0) {
                return x;
            }
            else {
                return (-1);
            }
        }
};

int main() {
    string str;
    int num, ope;
    stack st_1;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> str;

        if (str == "push") {
            cin >> ope;
            st_1.push(ope);
        }
        else if (str == "top") {
            cout << st_1.top() << '\n';
        }
        else if (str == "pop") {
            cout << st_1.pop() << '\n';
        }
        else if (str == "size") {
            cout << st_1.size() << '\n';
        }
        else if (str == "empty") {
            cout << st_1.empty() << '\n';
        }
    }

    return (0);   
}