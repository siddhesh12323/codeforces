#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<vector<int>> output;
	while(t--) {
		int wheels;
		cin>>wheels;
		vector<int> lock;
		for(int i = 0; i < wheels; i++) {
			int n;
			cin>>n;
			lock.push_back(n);
		}
		vector<string> operations;
		for(int i = 0; i < wheels; i++) {
			int operations_count;
			string operation;
			cin>>operations_count>>operation;
			operations.push_back(operation);
		}
		for(int j = 0; j < operations.size(); j++) {
			for(int i = 0; i < operations[j].size(); i++) {
				if(operations[j][i] == 'D') {
					operations[j][i] = 'U';
				} else if(operations[j][i] == 'U'){
					operations[j][i] = 'D';
				}
			}
		}
		vector<int> decipher;
		for(int i = 0; i < operations.size(); i++) {
			int current = lock[i];
			for(int j = 0; j < operations[i].size(); j++) {
				if(current == 9 && operations[i][j] == 'U') {
					current = 0;
				} else if (current == 0 && operations[i][j] == 'D') {
					current = 9;
				} else if (operations[i][j] == 'D') {
					current--;
				} else if (operations[i][j] == 'U') {
					current++;
				}
			}
			decipher.push_back(current);
		}
		output.push_back(decipher);
	}
	for(int i = 0; i < output.size(); i++) {
		for(int j = 0; j < output[i].size(); j++) {
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
