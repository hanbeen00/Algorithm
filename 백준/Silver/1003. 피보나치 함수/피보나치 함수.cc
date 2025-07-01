#include <bits/stdc++.h>
using namespace std;


int arr0[50];
int arr1[50];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    arr0[0]=1;
    arr1[0]=0;
    arr0[1]=0;
    arr1[1]=1;
    
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        for(int j=2; j<=tmp; j++){
            arr0[j] = arr0[j-1] + arr0[j-2];
            arr1[j] = arr1[j-1] + arr1[j-2];
        }

        cout << arr0[tmp] << " " << arr1[tmp] << "\n";
    }
     
    return 0;
}
