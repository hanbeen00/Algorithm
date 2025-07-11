#include <bits/stdc++.h>
using namespace std;

set<int> s;               
map<int, int> compressed;
vector<int> arr;         

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
        s.insert(tmp); 
    }

    int cnt = 0;
    for (int i : s) {
        compressed[i] = cnt++;
    }

    for (int i = 0; i < n; i++) {
        cout << compressed[arr[i]] << " ";
    }
    cout << "\n";

    return 0;
}
