#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int result = 0;
    for(int i=1; i<=n; i++){
        if(i>=1 && i<=99){
            result++;
        }
        else if(i>=100 && i<=999){
            int hund = i/100;
            int ten = (i - hund*100)/10;
            int one = i%10;

            if((hund - ten) == (ten - one)){
                result++;
            }
        }
        else{
            int thou = i/1000;
            int hund = (i - thou*1000)/100;
            int ten = (i - thou*1000 - hund*100)/10;
            int one = i%10;

            if(((thou - hund) == (hund - ten))&&((hund - ten) == (ten - one))){
                result++;
            }
        }
    } 

    cout << result << "\n";

    return 0;
}
