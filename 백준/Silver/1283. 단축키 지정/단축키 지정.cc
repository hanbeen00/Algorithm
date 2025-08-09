#include <bits/stdc++.h>
using namespace std;

int n;
bool arr[256];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s;
        getline(cin,s);
        bool found = false;
        int cnt = -1;
        for(int j=0; j<s.size(); j++){
            if(j==0||s[j-1]==' '){
                char tmp = s[j];
                if (tmp >= 'A' && tmp <= 'Z'){
                    tmp += 32;
                }
                if (!arr[tmp]) {
                    arr[tmp] = true;
                    cnt = j;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == ' ') {
                    continue;
                }
                char tmp = s[j];
                if (tmp >= 'A' && tmp <= 'Z'){
                    tmp += 32;
                }

                if (!arr[tmp]) {
                    arr[tmp] = 1;
                    cnt = j;
                    found = true;
                    break;
                }
            }
        }

        for(int j=0; j<s.size();j++){
            if(j==cnt){
                cout << '[' << s[j] << ']';
            }
            else{
                cout << s[j];
            }
        }
        cout << "\n";
    }
    
    return 0;
}
