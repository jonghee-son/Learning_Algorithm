/*
 * Softeer 6270
 * GBC
 */
#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char** argv) {
        int N = 0, M = 0, out = 0;
        deque<pair<int, int>> limit, act_value;

        cin >> N >> M;

        for (int i = 0; i < N; i++) {
                int tmp1 = 0, tmp2 = 0;
                cin >> tmp1 >> tmp2;
                limit.push_front(make_pair(tmp1, tmp2));
        }

        for (int i = 0; i < M; i++) {
                int tmp1 = 0, tmp2 = 0;
                cin >> tmp1 >> tmp2;

                act_value.push_front(make_pair(tmp1, tmp2));
        }

        while (limit.size() && act_value.size()) {
                if (limit.at(0).first <= 0) {
                        limit.pop_front();
                }
                if (act_value.at(0).first <= 0) {
                        act_value.pop_front();
                }

                if (limit.empty() || act_value.empty()) {
                        break;
                }

                int tmp = 0;

                if (limit.at(0).first > act_value.at(0).first) {
                        limit.at(0).first -= act_value.at(0).first;
                        act_value.at(0).first = 0;
                        tmp = limit.at(0).second - act_value.at(0).second;
                }
                else {
                        act_value.at(0).first -= limit.at(0).first;
                        limit.at(0).first = 0;
                        tmp = limit.at(0).second - act_value.at(0).second;
                }

                if (tmp < out) {
                        out = tmp;
                }
        }

        cout << -out;

        return 0;
}

