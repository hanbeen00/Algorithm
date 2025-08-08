#include <bits/stdc++.h>
using namespace std;

int n, m;
bool visited[10];
vector<int> v;

void dfs(int index, int cnt){
    if(cnt==m){
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }
    visited[index]=true;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            v.push_back(i);
            dfs(i,cnt+1);
            v.pop_back();
            visited[i]=false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=1; i<=n; i++){
        visited[i]=true;
        v.push_back(i);
        dfs(i,1);
        v.pop_back();
        visited[i]=false;
    }
    
    return 0;
}
