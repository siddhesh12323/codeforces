#include<bits/stdc++.h>
using namespace std;

int count2(string num, string pi) {
	int count = 0;
		for(int i = 0; i < num.size(); i++) {
			if(num[i] == pi[i]) {
				count++;
			} else {
				break;
			}
		}
	return count;
}

int main() {
	int t;
	cin>>t;
	vector<int> output;
	while(t--) {
		string num;
		string pi = "314159265358979323846264338327";
		cin>>num;
		output.push_back(count2(num, pi));
	}
	for(int i = 0; i < output.size(); i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
