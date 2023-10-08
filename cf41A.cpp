#include<bits/stdc++.h>
using namespace std;

string check(string s, string t) {
	if(s.size() != t.size()) {
		return "NO";
	}
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != t[s.size() - i - 1]) {
			return "NO";		
		}
	}
	return "YES";
}

int main() {
	string s, t;
	cin>>s;
	cin>>t;
	cout<<check(s, t);
	return 0;
}
