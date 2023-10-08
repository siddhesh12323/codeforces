#include<bits/stdc++.h>
using namespace std;

bool containsAllAlphabets(const string& str, int n) {
    // Create an array to track the presence of each alphabet
    bool alphabets[26] = {false};

    // Iterate through the string and mark the presence of each alphabet
    for (char c : str) {
        if (isalpha(c)) {
            alphabets[tolower(c) - 'a'] = true;
        }
    }

    // Check if all alphabets are present
    return all_of(alphabets, alphabets + 26, [](bool present) { return present; });
}

int main() {
	int n;
	string s;
	cin>>n;
	cin>>s;
	if(!containsAllAlphabets(s, n) || n < 26) {
		cout<<"NO";
	} else {
		cout<<"YES";
	}
	return 0;
}
