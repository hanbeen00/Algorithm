#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        int cnt = 0;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='('){
                cnt++;
            }
            else if(s[j]==')'){
                cnt--;
            }
            if(cnt<0){
                break;
            }
        }
        if(cnt!=0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        } 
    }
    
    return 0;
}
