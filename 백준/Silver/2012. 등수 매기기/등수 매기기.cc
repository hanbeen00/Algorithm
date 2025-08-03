#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    long result = 0;
    for(int i=1; i<=v.size();i++){
        result = result + abs(v[i-1]-i);
    }

    cout << result << "\n";

    return 0;
}
