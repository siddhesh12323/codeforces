#include<bits/stdc++.h>
using namespace std;

bool check(string input, char target) {
	for(int i = 0; i < input.size(); i++) {
		if(input[i] == target) {
			return true;
		}
	}
	return false;
}

int main() {
	int t;
	cin>>t;
	vector<string> output;
	while(t--) {
		char c;
		cin>>c;
		if(check("codeforces", c)) {
			output.push_back("YES");
		} else {
			output.push_back("NO");
		}
	}
	for(int i = 0; i < output.size(); i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
