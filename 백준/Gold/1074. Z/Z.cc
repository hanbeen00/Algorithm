#include <bits/stdc++.h>
using namespace std;

int z(int n, int r, int c){
    if(n == 0) return 0;

    int half = pow(2, n-1);
    int quadrant_size = half*half;
    int offset = 0;

    if(r<half && c<half){
        offset = 0;
        return offset + z(n-1,r,c);
    }
    else if(r < half && c >= half){
        offset = quadrant_size;
        return offset + z(n-1,r,c-half);
    }
        else if (r >= half && c < half) {
        offset = 2 * quadrant_size;
        return offset + z(n - 1, r - half, c);
    }
    else {
        offset = 3 * quadrant_size;
        return offset + z(n - 1, r - half, c - half);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, c;
    cin >> n >> r >> c;
    cout << z(n,r,c) << "\n";
}
