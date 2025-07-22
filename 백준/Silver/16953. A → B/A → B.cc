#include <bits/stdc++.h>
using namespace std;

long long a,b;

void bfs(long index){
    queue<pair<long, long>> q;
    q.push({index,1});

    while(!q.empty()){
        long present = q.front().first;
        long time = q.front().second;
        q.pop();
        long next1= present*2;
        long next2= present*10+1;
        if(next1==b||next2==b){
            cout << time+1 << "\n";
            return;
        }
        if(next1<b){
            q.push({next1,time+1});
        }
        if(next2<b){
            q.push({next2,time+1});
        }
    }
    cout << -1 << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;
    bfs(a);

    return 0;
}