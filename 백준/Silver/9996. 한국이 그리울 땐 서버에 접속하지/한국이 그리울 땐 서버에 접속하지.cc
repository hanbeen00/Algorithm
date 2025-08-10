#include<bits/stdc++.h>
using namespace std;

string a;
string b;
int n;
string pre;
string out;

int main(){
	cin >> n;
	cin >> a;
	int pos = a.find('*');
	pre = a.substr(0,pos);
	out = a.substr(pos+1);
	
	for(int i=0; i<n; i++){
		cin >> b;
		if(pre.size()+out.size() > b.size()){
			cout << "NE\n";
		}
		
		else{
			if(pre == b.substr(0,pre.size()) && out == b.substr(b.size()-out.size())){
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}	
		}
	}
	return 0;
}