/*
 * Softeer 6282
 * Obstacle recognition program
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
int map_size = 0;
int cnt = 0;
vector<int> res;

bool Map[26][26] = { 0, }, visited[26][26] = { 0, };

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	visited[x][y] = true;
	cnt++;
	q.push(make_pair(x, y));

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < map_size && ny >= 0 && ny < map_size && !visited[nx][ny] && Map[nx][ny] == 1) {
			q.push(make_pair(nx, ny));
		}
	}

	while (!q.empty()) {
		int tx = q.front().first, ty = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = tx + dx[i], ny = ty + dy[i];
			if (nx >= 0 && nx < map_size && ny >= 0 && ny < map_size && !visited[nx][ny] && Map[nx][ny] == 1) {
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
				cnt++;
			}
		}
	}
}

int main(int argc, char** argv) {
	cin >> map_size;

	for (int i = 0; i < map_size; i++) {
		for (int j = 0; j < map_size; j++) {
			int tmp;
			scanf("%1d", &tmp);

			Map[i][j] = tmp;
		}
	}

	for (int i = 0; i < map_size; i++) {
		for (int j = 0; j < map_size; j++) {
			if (Map[i][j] == 1) {
				bfs(i, j);
				for (int k = 0; k < map_size; k++) {
					for (int l = 0; l < map_size; l++) {
						if (visited[k][l] == 1) {
							Map[k][l] = 0;
						}
					}
				}
				memset(visited, 0, sizeof(visited));
				if (cnt) res.push_back(cnt);
				cnt = 0;
			}
		}
	}

	sort(res.begin(), res.end());

	cout << res.size() << "\n";

	for (int i = 0; i < res.size(); i++) {
		cout << res.at(i) << "\n";
	}

	return 0;
}

