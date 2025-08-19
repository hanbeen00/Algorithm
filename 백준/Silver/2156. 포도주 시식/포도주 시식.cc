#include <bits/stdc++.h>
using namespace std;

int n;
int arr[10005];
int dp[10005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    for(int i=3; i<=n; i++){
        dp[i] = max(dp[i-3]+arr[i-1]+arr[i],max(dp[i-2]+arr[i],dp[i-1]));
    }

    cout << dp[n] << "\n";
}
