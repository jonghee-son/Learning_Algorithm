/*
 * Softeer 6266
 * Meeting room reservation
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool info[50][19] = { 0, };

int main(void) {
        vector<pair<string, int>> name_room;
        vector<string> name_room_sorted;
        int num_room = 0, num_meeting = 0;

        cin >> num_room >> num_meeting;

        for (int i = 0; i < num_room; i++) {
                string tmp;
                cin >> tmp;
                name_room.push_back(make_pair(tmp, i));
                name_room_sorted.push_back(tmp);
        }

        sort(name_room_sorted.begin(), name_room_sorted.end());

        for (int i = 0; i < num_meeting; i++) {
                string tmp;
                int start = 0, end = 0, index = -1;
                bool reserve_valid = true;

                cin >> tmp >> start >> end;
                end--;

                for (int j = 0; j < num_room; j++) {
                        if (name_room[j].first.compare(tmp) == 0) {
                                index = j;
                                break;
                        }
                }

                for (int j = start; j <= end; j++) {
                        if (info[index][j] == 0 && reserve_valid == true) {
                                reserve_valid = true;
                        }
                        else {
                                reserve_valid = false;
                        }
                }

                if (reserve_valid) {
                        for (int j = start; j <= end; j++) {
                                info[index][j] = 1;
                        }
                }
        }

        for (int i = 0; i < num_room; i++) {
                vector<int> output_time;
                vector<pair<int, int>> res;
                int index = -1;

                for (int j = 0; j < num_room; j++) {
                        if (name_room[j].first.compare(name_room_sorted.at(i)) == 0) {
                                index = j;
                        }
                }

                cout << "Room " << name_room[index].first << ":\n";

                for (int j = 9; j < 18; j++) {
                        if (info[index][j] == 0) {
                                output_time.push_back(j);
                        }
                }

                if (output_time.empty()) {
                        cout << "Not available\n";
                }
                else {
                        vector<int> tmp;
                        for (int j = 0; j < output_time.size(); j++) {
                                tmp.push_back(output_time.at(j));
                                if (j + 1 < output_time.size()) {
                                        if (output_time.at(j + 1) == output_time.at(j) + 1) {
                                                continue;
                                        }
                                }

                                res.push_back(make_pair(tmp.front(), tmp.back()));
                                tmp.clear();
                        }

                        cout << res.size() << " available:\n";

                        for (int j = 0; j < res.size(); j++) {
                                printf("%02d-%02d\n", res.at(j).first, res.at(j).second - 1);
                        }
                }

                if (i != num_room - 1) {
                        cout << "-----\n";
                }
        }

        return 0;
}

