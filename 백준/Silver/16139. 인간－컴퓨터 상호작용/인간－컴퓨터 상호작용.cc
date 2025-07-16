#include <bits/stdc++.h>
using namespace std;

string s;
char arr[2005];
int n;
int result[2005][26];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(i > 0) {
            for(int j = 0; j < 26; j++) {
                result[i][j] = result[i-1][j];
            }
        }
        result[i][s[i] - 'a']++;
    }


    cin >> n;
    for(int i=0; i<n; i++){
        char tmp;
        int start, end;
        cin >> tmp >> start >> end;
        if(start==0){
            cout << result[end][tmp-'a'] << "\n";
        }
        else{
            cout << result[end][tmp-'a'] - result[start-1][tmp-'a'] << "\n";
        }
    }

    return 0;
}
