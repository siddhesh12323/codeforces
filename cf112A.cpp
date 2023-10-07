#include<bits/stdc++.h>
using namespace std;

int lex(string input1, string input2) {
	for(int i = 0; i < input1.size(); i++) {
		if(tolower(input1[i]) < tolower(input2[i])) {
			return -1;
		} else if(tolower(input1[i]) > tolower(input2[i])) {
			return 1;
		}
	}
	return 0;
}

int main() {
	string input1, input2;
	cin>>input1;
	cin>>input2;
	cout<<lex(input1, input2);
}
