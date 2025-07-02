#include <bits/stdc++.h>
using namespace std;

long long arr[105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    arr[1]=1;
    arr[2]=1;
    arr[3]=arr[2];
    arr[4]=arr[1]+arr[3];
    arr[5]=arr[4];

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        for(int j=6; j<=tmp; j++){
            arr[j] = arr[j-5] + arr[j-1];
        }
        cout << arr[tmp] << "\n";
    }

    return 0;
}
