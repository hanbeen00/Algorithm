#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v[105];
bool visited[105];
int arr[105][105];

void bfs(int index) {
    queue<int> q;
    visited[index] = true;
    q.push(index);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int next : v[curr]) {
            if (!visited[next]||next==index) {
                visited[next] = true;
                arr[index][next] = 1; 
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int tmp;
            cin >> tmp;
            if (tmp == 1) {
                v[i].push_back(j);
            }
        }
    }

    for (int i=1; i<=n; i++) {
        memset(visited, false, sizeof(visited));
        bfs(i);
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
