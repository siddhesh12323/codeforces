#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<int> output;
	while(t--) {
		string keyboard;
		cin>>keyboard;
		string word;
		cin>>word;
		vector<int> indexArr;
		int count = 0;
		for(int i = 0; i < word.size(); i++) {
    		if (keyboard.find(word[i]) != string::npos) {
        		indexArr.push_back(keyboard.find(word[i]));
    		}
    	}
    	for(int i = 0; i < indexArr.size()-1; i++) {
    		count+=abs(indexArr[i+1]-indexArr[i]);
    	}
    	output.push_back(count);
	}
	for(int i = 0;i < output.size(); i ++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
