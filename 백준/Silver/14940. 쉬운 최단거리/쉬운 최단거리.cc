#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[1005][1005];
int dist[1005][1005];
bool visited[1005][1005];

int dx[4] = {-1, 0, 1, 0}; // 상 우 하 좌
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int start_x = -1, start_y = -1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin >> arr[i][j];
            dist[i][j] = 0;
            if (arr[i][j] == 2) {
                start_x = i;
                start_y = j;
            }
        }
    }

    // BFS 시작
    queue<pair<int,int>> q;
    q.push({start_x, start_y});
    visited[start_x][start_y] = true;
    dist[start_x][start_y] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >=1 && nx <= n && ny >=1 && ny <= m) {
                if (!visited[nx][ny] && arr[nx][ny] == 1) {
                    visited[nx][ny] = true;
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    // 결과 출력
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if(!visited[i][j]&&arr[i][j]==1){
                cout << -1 << " ";
            }
            else{
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
