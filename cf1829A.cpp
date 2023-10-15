#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string target = "codeforces";
	vector<int> output;
	while(t--) {
		string s;
		int count = 0;
		cin>>s;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] != target[i]) {
				count++;
			}
		}
		output.push_back(count);
	}
	for(int i = 0;i < output.size(); i ++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
