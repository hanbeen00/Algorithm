#include <bits/stdc++.h>
using namespace std;

int n, m, b;
int max_num=-1; 
int min_num=257;
int arr[505][505];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n >> m >> b;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> arr[i][j];
            if(arr[i][j]>max_num){
                max_num = arr[i][j];
            }
            if(arr[i][j]<min_num){
                min_num = arr[i][j];
            }
        }
    }

    int min_time=INT_MAX;
    int result=0;
    for(int h=max_num; h>=min_num; h--){
        int not_enough=0;
        int enough=0;
        int total_time=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(arr[i][j]>h){
                    enough = enough + arr[i][j]-h;
                }
                if(arr[i][j]<h){
                    not_enough = not_enough + h-arr[i][j];
                }
            }
        }
        if(enough + b >= not_enough){
            total_time = enough*2 + not_enough;
            if(total_time < min_time){
                min_time = total_time;
                result = h;
            }
        }
    }

    cout << min_time << " " << result << "\n";

    return 0;
}