#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int number) {
	int sum = 0;
    int tempNumber = number;

    while (tempNumber > 0) {
        int digit = tempNumber % 10;
        sum += digit;
        tempNumber /= 10;
    }
    
    return sum;
}

int main() {
	int t;
	cin>>t;
	vector<int> output;
	while(t--){
		int x, k;
		cin>>x>>k;
		while(1==1) {
			if(sumOfDigits(x) % k == 0) {
				output.push_back(x);
				break;
			} else {
				x++;
			}
		}
	}
	for(int i = 0; i < output.size(); i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
