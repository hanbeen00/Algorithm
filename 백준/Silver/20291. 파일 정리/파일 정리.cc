#include <bits/stdc++.h>
using namespace std;

int n;
map<string, int> m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        int where = str.find('.');
        string tmpstr = str.substr(where+1, str.size());
        m[tmpstr]++;
    }

    for(auto& cnt : m){
        cout << cnt.first << " " << cnt.second << "\n";
    }
    
    return 0;
}