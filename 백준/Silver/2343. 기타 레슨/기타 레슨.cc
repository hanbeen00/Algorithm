#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vec;
int max_m=0;
int min_m=0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
        min_m = max(min_m, tmp);  // 최소 크기는 가장 큰 값이어야 함
        max_m += tmp;             // 최대 크기는 모든 값의 합
    }

    int result = max_m;
    while(min_m<=max_m){
        int mid_m = (max_m + min_m)/2;
        int sum=0;
        int cnt=1;

        for(int i=0; i<n; i++){
            if(sum+vec[i] > mid_m){
                cnt++;
                sum=0;
            }
            sum=sum+vec[i];
        }
        if(cnt>m){
            min_m = mid_m+1;
        }
        else{
            result = mid_m;
            max_m = mid_m-1;
        }
    }
    cout << result << "\n";
}   
