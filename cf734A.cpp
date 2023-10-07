#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int anton = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'A') {
			anton++;
		}
	}
	if(anton > (s.size() - anton)) {
		cout<<"Anton";
	} else if (anton == (s.size() - anton)) {
		cout<<"Friendship";
	} else {
		cout<<"Danik";
	}
	return 0;
}
