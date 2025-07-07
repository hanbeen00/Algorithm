#include <bits/stdc++.h>
using namespace std;

int m[10005] = {INT_MAX,};
vector<pair<int, int>> v[10005];

int main(){
    
    int n, d;
    cin >> n >> d;
    for(int i=0; i<n; i++){
        int tmp1, tmp2, tmp3;
        cin >> tmp1 >> tmp2 >> tmp3;
        if((tmp2<=d)&&(tmp3<tmp2-tmp1)){
            v[tmp2].push_back({tmp1, tmp3});
        }
    }

    m[0] = 0;
    for(int i=1; i<=d; i++){
        m[i] = m[i - 1] + 1;
        for(int j=0; j<v[i].size();j++){
            m[i] = min(m[i], m[v[i][j].first]+v[i][j].second);
        }
    }

    cout << m[d] << "\n";

    return 0;
}