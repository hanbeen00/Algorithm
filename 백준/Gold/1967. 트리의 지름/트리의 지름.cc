#include <bits/stdc++.h>
using namespace std;

bool visited[10005];
vector<pair<int,int>> v[10005];
int n;
int result = 0;
int final = 0;

void dfs(int index){
    visited[index] = true;
    for(int i=0; i<v[index].size(); i++){
        int tmp = v[index][i].first;
        int cost = v[index][i].second;
        if(!visited[tmp]){
            result = result + cost;
            final = max(final,result);
            dfs(tmp);
            result = result - cost;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;
        v[from].push_back({to, weight});
        v[to].push_back({from, weight});
    }

    for(int i=1; i<=n; i++){
        dfs(i);
        memset(visited,false,sizeof(visited));
    }

    cout << final << "\n";

    return 0;
}
