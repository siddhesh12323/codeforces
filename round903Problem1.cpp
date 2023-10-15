#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<int> minNumberOfOperationsVector;
	while(t--) {
		int n, m;
		int count = 0;
		cin>>n>>m;
		string x;
		cin>>x;
		string s;
		cin>>s;
		while (x.find(s) == string::npos) {
        	x += x;
        	count++;
        	if (x.size() > 100) {
        	    count = -1;
        	    break;
        	}
    	}
    	minNumberOfOperationsVector.push_back(count);
	}
	for(int i = 0; i < minNumberOfOperationsVector.size(); i++) {
		cout<<minNumberOfOperationsVector[i]<<endl;
	}
	return 0;
}
