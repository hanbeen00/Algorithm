#include <bits/stdc++.h>
using namespace std;

string s;
stack<char> stk;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A'&&s[i]<='Z'){
            cout << s[i];
        }
        else if(s[i]=='('){
            stk.push(s[i]);
        }
        else if(s[i]==')'){
            while(!stk.empty() && stk.top()!='('){
                cout << stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if(s[i]=='*' || s[i]=='/'){
            while(!stk.empty() && (stk.top() =='*'||stk.top() =='/')){
                cout << stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
        else if(s[i]=='+'||s[i]=='-'){
            while(!stk.empty() && stk.top() != '('){
                cout << stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }

    }
    while(!stk.empty()){
        cout << stk.top();
        stk.pop();
    }
    cout << "\n";

    return 0;
}