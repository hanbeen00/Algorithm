#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_set<string> unheard;
    vector<string> result;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < m; i++) {
        string name;
        cin >> name;
        if (unheard.find(name) != unheard.end()) {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";
    for (int i=0; i<result.size(); i++) {
        cout << result[i] << "\n";
    }

    return 0;
}
