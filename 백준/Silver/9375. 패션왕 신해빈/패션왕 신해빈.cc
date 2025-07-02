#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        map<string, int> maap;
        for(int j=0; j<m; j++){
            string tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            if(maap.find(tmp2)==maap.end()){
                maap[tmp2]=1;
            }
            else{
                maap[tmp2]= maap[tmp2]+1;
            }
        }
        int result = 1;
        for(auto &p : maap){
            result *= (p.second+1);
        }
        cout << result-1 << "\n";
    }

    return 0;
}
