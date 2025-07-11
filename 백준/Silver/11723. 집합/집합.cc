#include <bits/stdc++.h>
using namespace std;

bool arr[21];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string cmd;
        int x;

        cin >> cmd;

        if (cmd == "add") {
            cin >> x;
            arr[x] = true;
        }
        else if (cmd == "remove") {
            cin >> x;
            arr[x] = false;
        }
        else if (cmd == "check") {
            cin >> x;
            cout << arr[x] << "\n";
        }
        else if (cmd == "toggle") {
            cin >> x;
            arr[x] = !arr[x];
        }
        else if (cmd == "all") {
            fill(arr, arr + 21, true);
        }
        else if (cmd == "empty") {
            fill(arr, arr + 21, false);
        }
    }

    return 0;
}
