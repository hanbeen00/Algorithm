#include <bits/stdc++.h>
using namespace std;

int n, m;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> str;

    int result = 0;
    int count = 0; 

    for (int i = 1; i < m - 1; i++) {
        if (str[i-1] == 'I' && str[i] == 'O' && str[i+1] == 'I') {
            count++;        
            if (count == n) {
                result++;  
                count--;     
            }
            i++; 
        } 
        else {
            count = 0; 
        }
    }

    cout << result << "\n";
    return 0;
}
