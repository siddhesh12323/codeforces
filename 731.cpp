#include <iostream>
using namespace std;

int main() {
    string exhibitName;
    cin >> exhibitName;

    int rotations = 0;
    char currentLetter = 'a';

    for (char letter : exhibitName) {
        int clockwise = (letter - currentLetter + 26) % 26; // Calculate the number of clockwise rotations
        int counterclockwise = (currentLetter - letter + 26) % 26; // Calculate the number of counterclockwise rotations

        // Choose the minimum of the two rotation options
        rotations += min(clockwise, counterclockwise);

        currentLetter = letter; // Update the current letter to the printed letter
    }

    cout << rotations << endl; // Output the minimum number of rotations
    return 0;
}

