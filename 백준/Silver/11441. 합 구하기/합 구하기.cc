#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr1[100005];
int arr2[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr1[i];
        arr2[i] = arr2[i-1] + arr1[i];
    }
    cin >> m;
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        cout << arr2[b] - arr2[a-1] << "\n";
    }

    
    return 0;
}
