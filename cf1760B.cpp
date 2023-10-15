#include<bits/stdc++.h>
using namespace std;

bool compareDescending(char a, char b) {
    return a > b;
}

int main() {
	int t;
	cin>>t;
	vector<int> output;
	while(t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		sort(s.begin(), s.end(), compareDescending);
		output.push_back(s[0] - 'a' + 1);
	}
	for(int i = 0;i < output.size(); i ++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
