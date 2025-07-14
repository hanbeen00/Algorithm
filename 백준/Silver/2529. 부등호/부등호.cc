#include <bits/stdc++.h>
using namespace std;

int n;
char arr[11];
bool visited[10];
vector<string> v;

bool isokay(char a, int num1, int num2){
    if(a=='>'){
        return num1 > num2;
    }
    else{
        return num1 < num2;
    }
}

void dfs(int index, string num){
    if(index == n+1){
        v.push_back(num);
        return;
    }

    for(int i=0; i<=9; i++){
        if(!visited[i]){
            if(index == 0 || isokay(arr[index-1], num[index-1] -'0', i)){
                visited[i] = true;
                dfs(index + 1, num + to_string(i));
                visited[i] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dfs(0,"");
    sort(v.begin(), v.end());
    cout << v.back() << '\n'; // 최댓값
    cout << v.front() << '\n'; // 최솟값
}
