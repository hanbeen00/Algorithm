#include<bits/stdc++.h>
using namespace std;

int a[15];
int b[15];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int empty = 0;
        int now = a[i];
        for(int j=0; j<n; j++){
            if(b[j]==0) empty++;
            if(now < empty){
                b[j] = i+1;
                break;
            }           
        }
    }

    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }    
    cout << "\n";

    return 0;
}