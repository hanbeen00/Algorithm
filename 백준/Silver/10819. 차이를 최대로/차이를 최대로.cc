#include <bits/stdc++.h>
using namespace std;

int a[15];
bool visited[15];
int n;
vector<int> result;
int res = 0;

void dfs(int depth) {
    if (depth == n) {
        int cnt= 0;
        for (int i=0; i<n-1; i++){
            cnt = cnt+ abs(result[i]-result[i+1]);
        }
        if(cnt>res){
            res = cnt;
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        visited[i] = true;
        result.push_back(a[i]);
        dfs(depth + 1);
        result.pop_back();
        visited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    dfs(0);

    cout << res << "\n";

    return 0;
}
