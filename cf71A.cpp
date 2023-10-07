#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string input;
		cin>>input;
		if(input.size() > 10) {
			string newinput;
			newinput = input[0] + to_string(input.size() - 2) + input[input.size() - 1];
			cout<<newinput<<endl;
		} else {
			cout<<input<<endl;
		}
	}
	return 0;
}
