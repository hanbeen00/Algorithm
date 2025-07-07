#include <bits/stdc++.h>
using namespace std;

int arr[30][30];
bool visited[30][30];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int n;
vector<int> v;

int bfs(int idx_x, int idx_y){
    int cnt=1;
    visited[idx_x][idx_y] = true;
    queue<pair<int,int>> q;
    q.push({idx_x, idx_y});

    while(!q.empty()){
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];
            if(next_x>=1&&next_x<=n&&next_y>=1&&next_y<=n&&arr[next_x][next_y]==1&&!visited[next_x][next_y]){
                visited[next_x][next_y]=true;
                q.push({next_x,next_y});
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch;
            cin >> ch;
            arr[i][j] = ch - '0';
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n; j++){
            if(arr[i][j]==1 && !visited[i][j]){
                v.push_back(bfs(i,j));
            }
        }
    }

    cout << v.size() << "\n";
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }

    return 0;
}