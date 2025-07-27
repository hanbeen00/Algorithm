#include <bits/stdc++.h>
using namespace std;

int n;
stack<long> st;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for(int i = 0; i < n; i++){
        long tmp;
        cin >> tmp;

        if(tmp != 0){
            st.push(tmp); // 스택에 저장
        }
        else{
            if(!st.empty()) st.pop(); // 마지막 값 제거
        }
    }

    long result = 0;
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    cout << result << "\n";
    return 0;
}
