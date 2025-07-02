#include <bits/stdc++.h>
using namespace std;

int arr[50000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    arr[1] = 1;
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        int tmp = INT_MAX;
        for(int j=1; j*j<=i; j++){
            tmp = min(tmp, arr[i-j*j]);
        }
        arr[i] = tmp + 1;
    }
    cout << arr[n] << "\n";
    return 0;
}
