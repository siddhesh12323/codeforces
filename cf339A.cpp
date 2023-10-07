#include<bits/stdc++.h>
using namespace std;

int main() {
	string input;
	cin>>input;
	string operands;
	for(int i = 0; i < input.size(); i++) {
		if(input[i] != '+') {
			operands.push_back(input[i]);
		}
	}
	sort(operands.begin(), operands.end());
	string output;
	for(int i = 0; i < operands.size(); i++) {
		output.push_back(operands[i]);
		if(i != operands.size() - 1) {
			output.push_back('+');
		}
	}
	for(int i = 0; i < output.size(); i++) {
		cout<<output[i];
	}
	return 0;
}
