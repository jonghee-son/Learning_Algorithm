/*
 * Softeer
 * https://softeer.ai/practice/info.do?idx=1&eid=411
 */
#include <iostream>
#include <cstring>
using namespace std;

int grid[100][100], visited[100][100], cnt[100][100];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
int row = 0, col = 0;

void search(int x, int y) {
    visited[x][y] = 1;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= row || ny >= col || visited[nx][ny] == 1) {
            continue;
        }

        if (grid[nx][ny]) {
            cnt[nx][ny]++;
        }
        else {
            search(nx, ny);
        }
    }
}

bool is_finished() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    bool start = false;
    int iteration = 0;
    memset(cnt, 0, sizeof(cnt));

    cin >> row >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
            if (grid[i][j]) {
                start = true;
            }
        }
    }

    while (start) {
        iteration++;

        search(0, 0);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (cnt[i][j] >= 2) {
                    grid[i][j] = 0;
                }
            }
        }

        start = !is_finished();

        memset(visited, 0, sizeof(visited));
        memset(cnt, 0, sizeof(cnt));
    }

    cout << iteration << '\n';

    return 0;
}

