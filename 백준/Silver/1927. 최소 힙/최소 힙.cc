#include <bits/stdc++.h>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<>> pq;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 0){
            if(pq.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(tmp);
        }
    }

    return 0;
}