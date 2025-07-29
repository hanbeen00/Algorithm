#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1005];
int max_h, max_x;
int max_l, max_r;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=0; i<n; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        arr[tmp1]=tmp2;
        if(max_h < tmp2){
            max_h = tmp2;
            max_x = tmp1;
        }
    }

    int result = 0;
    for(int i=0; i<max_x; i++){
        if(max_l<=arr[i]){
            max_l=arr[i];
        }
        result = result + max_l;
    }
    result = result + max_h;
    for(int i=1000; i>max_x; i--){
        if(max_r<=arr[i]){
            max_r=arr[i];
        }
        result = result + max_r;
    }

    cout << result << "\n";
   
    return 0;
}