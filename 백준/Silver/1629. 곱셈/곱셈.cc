#include <bits/stdc++.h>
using namespace std;

long long a,b,c;

long long result(long long index){
    if(index == 1){
        return a%c;
    }
    long long half = index/2;
    long long tmp = result(half);
    tmp = (tmp * tmp) % c;

    if(index%2==1){
        tmp = (tmp*a)%c;
    }

    return tmp;
}

int main(void) {
	
    cin >> a >> b >> c;
    cout << result(b) << "\n";

	return 0;
}