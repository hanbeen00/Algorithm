#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
vector<int> result;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        int tmp = 0;
        if(i==0){
            result.push_back(arr[i]);
        }
        else{
            result.push_back(max(arr[i],result[i-1]+arr[i]));
        }
    }
    sort(result.begin(),result.end());
    cout << result.back() << "\n";
    return 0;
}