#include <bits/stdc++.h>
using namespace std;

int n, m;
string str;
string pattern;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> str;

    // 패턴 생성: "IOIOI..." 길이 = 2*n+1
    for (int i = 0; i < 2 * n + 1; i++) {
        if (i % 2 == 0) pattern += 'I';
        else pattern += 'O';
    }

    int count = 0;
    int pos = str.find(pattern);
    while (pos != string::npos) {
        count++;
        pos = str.find(pattern, pos + 1);
    }

    cout << count << "\n";
    return 0;
}
