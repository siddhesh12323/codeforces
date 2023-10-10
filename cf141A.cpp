#include<bits/stdc++.h>
using namespace std;

bool checkInLetters(string &letters, char target) {
	for(int i = 0; i < letters.size(); i++) {
		if(letters[i] == target) {
			auto it = find(letters.begin(), letters.end(), letters[i]);
    		if (it != letters.end()) {
        		letters.erase(it);
    		}
			return true;
		}
	}
	return false;
}

void solution(string newString, string &letters) {
	for(int i = 0; i < newString.size(); i++) {
		if(!checkInLetters(letters, newString[i])) {
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
	return;
}

int main() {
	// 1
	string guestName, hostName, letters;
	cin>>guestName;
	cin>>hostName;
	cin>>letters;
	// 2
	if(guestName.size() + hostName.size() == letters.size()) {
		string newString = guestName+hostName;
		solution(newString, letters);
	} else {
		cout<<"NO";
	}
	return 0;
}

/*
* 1. INPUT GUESTNAME, HOSTNAME, LETTERS
* 2. CHECK IF GUEST+HOST = LETTERS SIZE
* 3. 
*/
