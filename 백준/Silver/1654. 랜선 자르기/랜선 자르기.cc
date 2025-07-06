#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k >> n;
    int max_num = -1;
    for (int i = 0; i < k; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        max_num = max(max_num, tmp);
    }

    long long start = 1;
    long long end = max_num;
    long long answer = 0;

    while (start <= end) {
        long long mid = (start + end) / 2;
        long long cnt = 0;
        for (int i = 0; i < k; i++) {
            cnt += v[i] / mid;
        }

        if (cnt >= n) {
            answer = mid;     
            start = mid + 1;  
        } 
        
        else {
            end = mid - 1;   
        }
    }

    cout << answer << "\n";
    return 0;
}
