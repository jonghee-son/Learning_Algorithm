#include <iostream>
#include <string>
using namespace std;

class deq {
    private:
        int front_counter = 0;
        int back_counter = 1;
        int maxsize = 0;
        int sz = 0;
        int * arr;
    
    public:
        int init(int x) {
            arr = new int[sizeof(int) * x];
            maxsize = x;

            return 0;
        }

        int pushFront(int x) {
            arr[front_counter] = x;
            front_counter = ((front_counter - 1) + maxsize) % maxsize;
            sz += 1;

            return 0;
        }

        int pushBack(int x) {
            arr[back_counter] = x;
            back_counter = (back_counter + 1) % maxsize;
            sz += 1;

            return 0;
        }

        int popFront() {
            int res;

            if (size() > 0) {
                res = arr[(front_counter + 1) % maxsize];
                front_counter = (front_counter + 1) % maxsize;
                sz -= 1;

                return res;
            }
            else {
                return -1;
            }
        }

        int popBack() {
            int res;

            if (size() > 0) {
                res = arr[((back_counter - 1) + maxsize) % maxsize];
                back_counter = ((back_counter - 1) + maxsize) % maxsize;
                sz -= 1;

                return res;
            }
            else {
                return -1;
            }
        }

        int size() {
            return sz;
        }

        int empty() {
            if (size() > 0) {
                return 0;
            }
            else {
                return 1;
            }
        }

        int front() {
            if (size() > 0) {
                return arr[(front_counter + 1) % maxsize];
            }
            else {
                return -1;
            }
        }

        int back() {
            if (size() > 0) {
                return arr[((back_counter - 1) + maxsize) % maxsize];
            }
            else {
                return -1;
            }
        }

        int terminate() {
            delete arr;

            return 0;
        }
};

int main() {
    int num, param;
    deq d;
    string command;

    cin >> num;

    d.init(num);

    for (int i = 0; i < num; i++) {
        cin >> command;

        if (command == "push_front") {
            cin >> param;
            d.pushFront(param);
        }
        else if (command == "push_back") {
            cin >> param;
            d.pushBack(param);
        }
        else if (command == "pop_back") {
            cout << d.popBack() << '\n';
        }
        else if (command == "pop_front") {
            cout << d.popFront() << '\n';
        }
        else if (command == "size") {
            cout << d.size() << '\n';
        }
        else if (command == "empty") {
            cout << d.empty() << '\n';
        }
        else if (command == "front") {
            cout << d.front() << '\n';
        }
        else if (command == "back") {
            cout << d.back() << '\n';
        }
        else {
            return -1;
        }
    }

    d.terminate();

    return 0;
}