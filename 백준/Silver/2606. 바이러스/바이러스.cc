#include <bits/stdc++.h>
using namespace std;

vector<int> v[105];
bool visited[105];
int result;

void dfs(int index) {
    visited[index] = true;
    for (int i = 0; i < v[index].size(); i++) {
        int next = v[index][i];
        if (!visited[next]) {
            result++;
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }

    dfs(1);

    cout << result << "\n";

    return 0;
}
