#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, p, q;
    long long t;
    cin >> w >> h;
    cin >> p >> q;
    cin >> t;

    int nx = (p + t) % (2 * w);
    if (nx > w) nx = 2 * w - nx;

    int ny = (q + t) % (2 * h);
    if (ny > h) ny = 2 * h - ny;

    cout << nx << " " << ny << "\n";
    return 0;
}
