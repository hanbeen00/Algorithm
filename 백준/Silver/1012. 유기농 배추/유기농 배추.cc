#include <bits/stdc++.h>
using namespace std;

int arr[55][55];
bool visited[55][55];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int t,n,m,k;
vector<int> v;

void bfs(int idx_x, int idx_y){
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
            if(next_x>=0&&next_x<n&&next_y>=0&&next_y<m&&arr[next_x][next_y]==1&&!visited[next_x][next_y]){
                visited[next_x][next_y]=true;
                q.push({next_x,next_y});
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for(int i=0; i<t; i++){
        int cnt=0;
        cin >> n >> m >> k;
        memset(arr,0,sizeof(arr));
        memset(visited,false,sizeof(visited));
        for(int j=0; j<k; j++){
            int x, y;
            cin >> x >> y;
            arr[x][y] = 1;
        }
        for(int j=0; j<n; j++){
            for(int p=0; p<m; p++){
                if(!visited[j][p]&&arr[j][p]==1){
                    bfs(j,p);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    

    return 0;
}