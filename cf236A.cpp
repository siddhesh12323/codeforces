#include<bits/stdc++.h>
using namespace std;

int main() {
	// 1, 2
	string username;
	vector<char> distinct_characters;
	cin	>>username;
	// 3
	for(int i = 0; i < username.size(); i++) {
		auto it = find(distinct_characters.begin(), distinct_characters.end(), username[i]);
		if(it == distinct_characters.end()) {
			distinct_characters.push_back(username[i]);
		}
	}
	// 4 
	if(distinct_characters.size() % 2 == 1) {
		cout<<"IGNORE HIM!";
	} else if (distinct_characters.size() % 2 == 0) {
		cout<<"CHAT WITH HER!";
	}
	return 0;
}

/*
THE ALGORITHM
1. TAKE INPUT OF USERNAME
2. MAKE A VECTOR CHAR X, IT STORES THE DISTINCT CHARS IN USERNAME
3. FOR THROUGH USERNAME
	3.1 IF i IS DISTINCT ADD TO X
4. CHECK IF THE SIZE OF X IS EVEN OR ODD AND PRINT THE RESULT
*/
