#include<bits/stdc++.h>
using namespace std;

void toUpper(string &str) {
	for (char& c : str) {
        c = std::toupper(c);
    }
}

int main() {
	int t;
	cin>>t;
	vector<string> inputArr;
	while(t--) {
		string input;
		cin>>input;
		inputArr.push_back(input);
	}
	for(int i = 0; i < inputArr.size(); i++) {
		toUpper(inputArr[i]);
		if(inputArr[i] == "YES") {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
