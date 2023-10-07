#include<bits/stdc++.h>
using namespace std;

string toUppercase(const string& input) {
    string result = input;
    for (char& c : result) {
        c = toupper(c);
    }
    return result;
}

string toLowercase(const string& input) {
    std::string result = input;
    for (char& c : result) {
        c = tolower(c);
    }
    return result;
}

int main() {
	// 1
	string username;
	cin>>username;
	// 2
	int uppercase = 0;
	int lowercase = 0;
	for (char character : username) {
		if(character > 64 && character < 91) {
			uppercase++;
		} else if (character > 96 && character < 123) {
			lowercase++;
		}
	}
	// 3
	if (uppercase > lowercase) {
		cout<<toUppercase(username);
	} else if (uppercase < lowercase) {
		cout<<toLowercase(username);
	} else {
		cout<<toLowercase(username);
	}
	return 0;
}

/*
THE ALGORITHM
1. TAKE INPUT STRING USERNAME
2. COUNT THE UPPERCASE AND LOWERCASE CHARS USING ASCII
3. IF UPPERCASE > LOWERCASE THEN CONVERT STRING TO LOWERCASE ELSE 
*/
