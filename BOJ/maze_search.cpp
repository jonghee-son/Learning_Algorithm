#include <bits/stdc++.h>
using namespace std;

int N, M;
int Map[101][101] = {0, };
bool visited[101][101] = {false, };
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
int cnt1 = 0, cnt2 = 0;

void dfs(int x, int y) {
	visited[x][y] = true;
	if (x == N - 1 && y == M - 1) return;
	cnt1++;
	
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > N - 1 || ny < 0 || ny > M - 1 || Map[nx][ny] == 0 || visited[nx][ny]) continue;
		if (Map[nx][ny] == 1) {
			Map[nx][ny] = Map[x][y] + 1;
			dfs(nx, ny);
		}
	}
}

void bfs(int x, int y) {
	visited[x][y] = true;
	queue<pair<int, int>> q;

	q.push(make_pair(x, y));

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > N - 1 || ny < 0 || ny > M - 1 || Map[nx][ny] == 0 || visited[nx][ny]) continue;
		q.push(make_pair(x, y));
	}

	while (!q.empty()) {
		int tx = q.front().first;
		int ty = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = tx + dx[i];
			int ny = ty + dy[i];

			if (nx < 0 || nx > N - 1 || ny < 0 || ny > M - 1 || Map[nx][ny] == 0 || visited[nx][ny]) continue;
			if (Map[nx][ny] == 1) {
				visited[nx][ny] = true;
				Map[nx][ny] = Map[tx][ty] + 1;
				q.push(make_pair(nx, ny));
				cnt2++;
				if (nx == N - 1 && ny == M - 1) return;
			}
		}
	}
}
	

int main(void) {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d" , &Map[i][j]);
		}
	}

	//dfs(0, 0);
	//memset(visited, false, sizeof(visited));
	//cout << cnt1 << '\n';
	bfs(0, 0);
	//cout << cnt2 << '\n';
	cout << Map[N - 1][M - 1];

	return 0;
}

