#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> arr;

void result(int index, int count) {
    if (count == 0) {
        for (int num : arr)
            cout << num << " ";
        cout << "\n";
        return;
    }

    for (int i = index; i <= n; i++) {
        arr.push_back(i);        
        result(i + 1, count - 1); 
        arr.pop_back();          
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    result(1, m);

    return 0;
}
