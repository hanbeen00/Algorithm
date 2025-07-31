#include <bits/stdc++.h>
using namespace std;

string s;
stack<char> stk;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    int result = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            stk.push(s[i]);
        }
        else if(s[i]==')'&&s[i-1]=='('){
            stk.pop();
            result = result + stk.size();
        }   
        else if(s[i]==')'&&s[i-1]==')'){
            stk.pop();
            result++;
        }
    }

    cout << result << "\n";    
    return 0;
}