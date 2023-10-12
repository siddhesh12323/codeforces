#include<bits/stdc++.h>
using namespace std;

bool squareString(string input) {
	if(input.size() % 2 != 0) {
		return false;
	} else {
		if(input.substr(input.size() / 2, input.size() / 2) == input.substr(0, input.size() / 2)) {
			return true;
		} else {
			return false;
		}
	}
}

int main() {
	int t;
	cin>>t;
	vector<string> output;
	while(t--) {
		string input;
		cin>>input;
		if(squareString(input)) {
			output.push_back("YES");
		} else {
			output.push_back("NO");
		}
	}
	for(int i =0 ; i < output.size(); i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
