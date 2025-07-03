#include <bits/stdc++.h>
using namespace std;

int arr[505][505]={-1,};
int dp[505][505]={-1,};
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=0; i<n ;i++){
        for(int j=0; j<=i; j++){
            cin >> arr[i][j];
        }
    }

    dp[0][0] = arr[0][0];
    for(int i=1; i<n ;i++){
        for(int j=0; j<=i; j++){
            if(j==0){
                dp[i][j] = arr[i][j] + dp[i-1][j];
            }
            else if(j==i){
                dp[i][j] = arr[i][j] + dp[i-1][j-1];
            }
            else{
                dp[i][j] = arr[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
            }
        }
    }

    int result = -1;
    for(int j=0; j<n; j++){
        result = max(result, dp[n-1][j]);
    }
    cout << result << "\n";


    return 0;
}
