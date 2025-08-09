#include <bits/stdc++.h>
using namespace std;

int n, k;
int visited[100005];

void bfs(int index){
    queue<int> q;
    q.push(index);
    visited[index] = 0;

    while(!q.empty()){
        int current = q.front();
        q.pop();
        if(current == k){
            break;
        }
        if (current-1 >= 0 && current-1 <= 100000 && visited[current-1] == 0) {
            visited[current-1] = visited[current] + 1;
            q.push(current-1);
        }
        if (current+1 >= 0 && current+1 <= 100000 && visited[current+1] == 0) {
            visited[current+1] = visited[current] + 1;
            q.push(current+1);
        }
        if (current*2 >= 0 && current*2 <= 100000 && visited[current*2] == 0) {
            visited[current*2] = visited[current] + 1;
            q.push(current*2);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    bfs(n);
    cout << visited[k] << "\n";

    return 0;
}
