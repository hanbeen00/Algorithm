#include <bits/stdc++.h>
using namespace std;

int k;
vector<pair<int,int>> v;

int main(void) {
    cin >> k;

    for(int i = 0; i < 6; i++) {
        int dir, len;
        cin >> dir >> len;
        v.push_back({dir, len});
    }

    int max_width = 0, max_height = 0;
    int small_width = 0, small_height = 0;

    for(int i = 0; i < 6; i++) {
        if(v[i].first == 1 || v[i].first == 2)
            max_width = max(max_width, v[i].second);
        else
            max_height = max(max_height, v[i].second);
    }

    for(int i = 0; i < 6; i++) {
        int prev = (i + 5) % 6;
        int next = (i + 1) % 6;
        int nextnext = (i + 8) % 6;
        if(v[prev].first == v[next].first && v[i].first == v[nextnext].first) {
            small_width = v[i].second;
            small_height = v[(i + 1) % 6].second;
        }
    }

    int area = (max_width * max_height) - (small_width * small_height);
    cout << area * k << "\n";

    return 0;
}
