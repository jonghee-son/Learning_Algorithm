#include <iostream>
#include <string>
using namespace std;

class que {
    private:
        int push_counter = 0;
        int pop_counter = 0;
        int * arr;

    public:
        int init(int x) {
            this->arr = new int[sizeof(int) * x];

            return 0;
        }

        int push(int x) {
            this->arr[this->push_counter] = x;
            this->push_counter += 1;

            return 0;
        }

        int pop() {
            int res;

            if (this->arr[this->pop_counter] > 0) {
                res = this->arr[this->pop_counter];
                this->arr[this->pop_counter] = 0;
                this->pop_counter += 1;

                return res;
            }
            else {
                return -1;
            }
        }

        int size() {
            int size_counter = 0;

            //for (int i = 0 + this->pop_counter; i < this->push_counter; i++) {
                //if (this->arr[i] > 0) {
                    //size_counter += 1;
                //}
            //}
            // searching for whole queue to get size of queue takes too long
            
            size_counter = push_counter - pop_counter;

            return size_counter;
        }

        int empty() {
            if (this->size() > 0) {
                return 0;
            }
            else {
                return 1;
            }
        }

        int front() {
            if (this->arr[this->pop_counter] != 0) {
                return this->arr[this->pop_counter];
            }
            else {
                return -1;
            }
        }

        int back() {
            if (this->arr[this->push_counter - 1] != 0) {
                return this->arr[this->push_counter - 1];
            }
            else {
                return -1;
            }
        }

        int terminate() {
            delete this->arr;

            return 0;
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num, param;
    string command;
    que q;

    cin >> num;

    q.init(num);

    for (int i = 0; i < num; i++) {
        cin >> command;

        if (command == "push") {
            cin >> param;
            q.push(param);
        }
        else if (command == "pop") {
            cout << q.pop() << '\n';
        }
        else if (command == "size") {
            cout << q.size() << '\n';
        }
        else if (command == "empty") {
            cout << q.empty() << '\n';
        }
        else if (command == "front") {
            cout << q.front() << '\n';
        }
        else if (command == "back") {
            cout << q.back() << '\n';
        }
        else {
            return -1;
        }
    }

    q.terminate();

    return 0;
}