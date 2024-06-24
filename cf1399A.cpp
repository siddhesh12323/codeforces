#include<bits/stdc++.h>
using namespace std;

// void print_vector(vector<int> v) {
// 	for(int i = 0; i < v.size(); i++) {
// 		cout << v[i] << ", ";
// 	}
// 	cout << "\n";
// }

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int num;
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		vector<int>::iterator it;
 		it = v.begin();
		for(int i = 0; i < v.size() - 1; i++) {
			if(v[i+1] - v[i] <= 1) {
				v.erase(it+i);
				i--;
			}
			// print_vector(v);
		}
		if(v.size() <= 1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";	
		}
	}
}

/*

*/