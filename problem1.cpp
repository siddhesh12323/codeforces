#include<bits/stdc++.h>
using namespace std;

void findThreeElementsWithSum(const std::vector<int>& arr, int n) {
    for (int i = 0; i < arr.size() - 2; ++i) {
        for (int j = i + 1; j < arr.size() - 1; ++j) {
            for (int k = j + 1; k < arr.size(); ++k) {
                if (arr[i] + arr[j] + arr[k] == n) {
                	cout<<"YES"<<endl;
                    cout << arr[i] << " " << arr[j] << " " << arr[k]<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> list1;
		for(int i = 0; i < n; i++) {
			if(i % 3 != 0) {
				list1.push_back(i);
			}
		}
		findThreeElementsWithSum(list1, n);
	}
	return 0;
}
