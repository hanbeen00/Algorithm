#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v[105];
bool visited[105];
int arr[105];

int bfs(int index){
    int relation = 0;

    queue<int> q;
    visited[index] = true;
    q.push(index);

    while(!q.empty()){
        int cnt = q.front();
        q.pop();
        for(int i=0; i<v[cnt].size();i++){
            int next = v[cnt][i];
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
                arr[next] = arr[cnt]+1;
            }
        }
    }

    relation = 0;
    for (int i = 1; i <= n; i++) {
        relation += arr[i];
    }
    return relation;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i=0; i<m; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }

    int result = INT_MAX;
    int answer = 0;
    for(int i=0; i<n; i++){
        int cnt = bfs(i+1);
        if(cnt < result){
            result = cnt;
            answer = i+1;
        }
        memset(visited, false, sizeof(visited));
        memset(arr, 0, sizeof(arr));
    }

    cout << answer << "\n";

    return 0;
}
