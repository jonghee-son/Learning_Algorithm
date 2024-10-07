/*
 * BOJ 14503 Robot Vacuum
 */
#include <bits/stdc++.h>
using namespace std;

int n = 0, m = 0, r = 0, c = 0, d = 0;
int cleared_tile = 0;
// n = column, m = row
int** room;

void vacuum_move(int x, int y, int dir, int** room) {
	if (room[x][y] == 0) {
		room[x][y] = 2;
		cleared_tile++;
	}
	else if (room[x - 1][y] != 0 && room[x + 1][y] != 0 && room[x][y - 1] != 0 && room[x][y + 1] != 0) {
		if (dir == 0) {
			if (room[x + 1][y] != 1) {
				x += 1;
			}
			else {
				return;
			}
		}
		else if (dir == 1) {
			if (room[x][y - 1] != 1) {
				y -= 1;
			}
			else {
				return;
			}
		}
		else if (dir == 2) {
			if (room[x - 1][y] != 1) {
				x -= 1;
			}
			else {
				return;
			}
		}
		else if (dir == 3) {
			if (room[x][y + 1] != 1) {
				y += 1;
			}
			else {
				return;
			}
		}
	}
	else {
		if (dir == 0) {
			dir = 3;
		}
		else {
			dir--;
		}
		
		if (dir == 0) {
			if (room[x - 1][y] == 0) {
				x -= 1;
			}
		}
		else if (dir == 1) {
			if (room[x][y + 1] == 0) {
				y += 1;
			}
		}
		else if (dir == 2) {
			if (room[x + 1][y] == 0) {
				x += 1;
			}
		}
		else if (dir == 3) {
			if (room[x][y - 1] == 0) {
				y -= 1;
			}
		}
	}

	vacuum_move(x, y, dir, room);
}


int main(void) {
	cin >> n >> m;
	room = new int*[n];
	for (int i = 0; i < n; i++) {
		room[i] = new int[m];
	}

	cin >> r >> c >> d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> room[i][j];
		}
	}

	vacuum_move(r, c, d, room);
	cout << cleared_tile;

	return 0;
}

