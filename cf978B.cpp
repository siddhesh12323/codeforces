#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string input;
	cin>>input;
	int output = 0;
	int consecutiveXCount = 0;
	for(char c : input) {
		if (c == 'x') {
            consecutiveXCount++;
            if (consecutiveXCount >= 3) {
                output++;
            }
        } else {
            consecutiveXCount = 0;
        }
	}
	cout<<output;
	return 0;
}
