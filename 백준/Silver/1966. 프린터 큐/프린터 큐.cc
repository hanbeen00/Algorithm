#include <bits/stdc++.h>
using namespace std;

int t, n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for(int i=0; i<t; i++){
        deque<pair<int,int>> dq;
        cin >> n >> m;
        for(int j=0; j<n; j++){
            int tmp;
            cin >> tmp;
            dq.push_back({tmp,j});
        }
        int cnt = 0;
        while(1){
            int max_num=-1;
            for(int i=0; i<dq.size();i++){
                if(max_num<=dq[i].first){
                    max_num = dq[i].first;
                }
            }

            if(dq[0].first>=max_num){
                cnt++;
                if(dq[0].second==m){
                    cout << cnt << "\n";
                    break;
                }
                dq.pop_front();
            }
            else{
                int tmp1 = dq[0].first;
                int tmp2 = dq[0].second;
                dq.pop_front();
                dq.push_back({tmp1,tmp2});
            }
        }
    }

    
    return 0;
}
