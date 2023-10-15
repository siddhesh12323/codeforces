#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<string> output;
	while(t--) {
		string input;
		cin>>input;
		int countAC = 0;
		int countB = 0;
		for(int i = 0; i < input.size(); i++) {
			if(input[i] == 65 || input[i] == 67) {
				countAC++;
			} else {
				countB++;
			}
		}
		if(countAC == countB) {
			output.push_back("YES");
		} else {
			output.push_back("NO");
		}
	}
	for(int i = 0;i < output.size(); i ++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
