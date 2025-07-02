#include <bits/stdc++.h>
using namespace std;

long long arr[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    arr[1] = 1;
    arr[2] = 2+1;

    for(int i=3; i<=n; i++){
        if(i%2==0){
            arr[i] = (arr[i-1]*2 +1)%10007;
        }
        else{
            arr[i] = (arr[i-1]*2 -1)%10007;
        }
    }

    cout << (arr[n])%10007 << "\n";
    return 0;
}
