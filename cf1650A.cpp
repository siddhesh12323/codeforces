#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<string> output;
	while(t--) {
		string s;
		char c;
		cin>>s;
		cin>>c;
		for(int i = 0; i < s.size(); i++) {
			if((i % 2 == 0) && s[i] == c) {
				output.push_back("YES");
			} else if ((i % 2 == 1) && s[i] == c) {
				output.push_back("NO");
			}
		}
	}
	for(string s : output) {
		cout<<s<<endl;
	}
	return 0;
}

/*
	abcde
	d
	cde
*/
