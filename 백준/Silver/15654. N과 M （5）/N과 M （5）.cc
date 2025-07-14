#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> arr;
vector<int> v;
vector<bool> used;

void result(int count) {
    if (count == 0) {
        for (int num : arr)
            cout << num << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {           
            used[i] = true;       
            arr.push_back(v[i]);  
            result(count - 1);    
            arr.pop_back();      
            used[i] = false;      
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        used.push_back(false);
    }
    sort(v.begin(), v.end());      // 사전순 출력을 위해 정렬
    result(m);                     // 순열 생성 시작

    return 0;
}
