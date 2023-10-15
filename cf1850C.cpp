#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<string> output;
	while(t--) {
		vector<vector<char>> charGrid(8, vector<char>(8));
		string s = "";
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 8; j++) {
				cin>>charGrid[i][j];
			}
		}
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 8; j++) {
				if(charGrid[i][j] != 46) {
					s.push_back(charGrid[i][j]);
				}
			}
		}
		output.push_back(s);
	}
	for(int i = 0;i < output.size(); i ++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
