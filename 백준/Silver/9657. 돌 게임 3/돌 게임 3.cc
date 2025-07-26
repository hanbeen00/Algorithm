#include <bits/stdc++.h>
using namespace std;

int n;
bool arr[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    arr[1] = false;
    arr[2] = true;
    arr[3] = false;
    arr[4] = false;
    for(int i=5; i<=n; i++){
        bool tmp = false;
        if(arr[i-1]==true){
            tmp = true;
        }
        if(arr[i-3]==true){
            tmp = true;
        }
        if(arr[i-4]==true){
            tmp = true;
        }
        if(tmp == true){
            arr[i] = false;
        }
        else{
            arr[i] =true;
        }
    }

    if(arr[n]==false){
        cout << "SK" << "\n";
    }
    else{
        cout << "CY" << "\n";
    }

    return 0;
}
