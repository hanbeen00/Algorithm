#include <bits/stdc++.h>
using namespace std;

int n;
char node[30][2];

void preorder (int n) {
	if (n == -1) return;
	cout << (char)(n+'A');
	preorder(node[n][0]);
	preorder(node[n][1]);
}

void inorder (int n) {
	if (n == -1) return;
	inorder(node[n][0]);
	cout << (char)(n+'A');
	inorder(node[n][1]);
}

void postorder (int n) {
	if (n == -1) return;
	postorder(node[n][0]);
	postorder(node[n][1]);
	cout << (char)(n+'A');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i=0; i<n; i++){
        char a,b,c;
        cin >> a >> b >> c;
        a = a-'A';		
		if (b == '.') {	
			node[a][0] = -1;
		}
		else {
			node[a][0] = b-'A';
		}
		if(c == '.') {
			node[a][1] = -1;
		}
		else {
			node[a][1] = c-'A';
		}
    }

    preorder(0); cout << '\n';
	inorder(0); cout << '\n';
	postorder(0); cout << '\n';

    return 0;
}