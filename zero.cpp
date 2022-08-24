#include <iostream>
using namespace std;

class stack {
    private:
        int num[100000] = {0, };
        int count = 0;
    public:
        int push(int x) {
            if (x != 0) {
                this->num[this->count] = x;
                this->count++;
            }
            else {
                this->num[this->count - 1] = 0;
                this->count--;
            }

            return (0);
        }

        int sum() {
            int res = 0;

            for (int i = 0; i <= stack::count; i++) {
                res += stack::num[i];
            } 

            return (res);
        }
};

int main() {
    stack money;
    int num, ope;

    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> ope;

        money.push(ope);
    }

    cout << money.sum() << '\n';

    return (0);
}