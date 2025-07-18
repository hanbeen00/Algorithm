#include <bits/stdc++.h>
using namespace std;
#define MAX 110

int N, K;
int W[MAX];
int V[MAX];
int DP[MAX][100010];     

int main(void) {
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}

	for (int i = 1; i <= N; i++) {                   
		for (int j = 1; j <= K; j++) {               
			if (j >= W[i]) {                        
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i]] + V[i]);  
			}
			else DP[i][j] = DP[i - 1][j];
		}   
	}
	cout << DP[N][K] << endl;
	
	return 0;
}