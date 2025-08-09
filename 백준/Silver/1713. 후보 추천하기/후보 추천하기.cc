#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total;
    cin >> n >> total;

    vector<tuple<int,int,int>> frame; 

    for (int t = 0; t < total; t++) {
        int num;
        cin >> num;

        bool found = false;
        for (int i = 0; i < (int)frame.size(); i++) {
            if (get<2>(frame[i]) == num) { 
                get<0>(frame[i])++; 
                found = true;
                break;
            }
        }

        if (!found) {
            if ((int)frame.size() == n) {
                sort(frame.begin(), frame.end());
                frame.erase(frame.begin());
            }
            frame.push_back({1, t, num});
        }
    }

    vector<int> ans;
    for (int i = 0; i < (int)frame.size(); i++) {
        ans.push_back(get<2>(frame[i]));
    }
    sort(ans.begin(), ans.end());
    for (int x : ans) cout << x << ' ';
}
