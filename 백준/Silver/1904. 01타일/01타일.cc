#include <bits/stdc++.h>
using namespace std;

long long n;
long long arr[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    arr[1]=1;
    arr[2]=2;
    for(int i=3; i<=n; i++){
        arr[i]= (arr[i-1] + arr[i-2])%15746;
    }
    cout << arr[n] << "\n";
    
    return 0;
}
