#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1005];
int dp[1005]; 

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = 0;
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        result = max(result, dp[i]); 
    }
    cout << result << "\n";
    return 0;
}
