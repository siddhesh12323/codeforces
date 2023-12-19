#include <iostream>
#include <string>

using namespace std;

bool isCharPresent(const string& str, char target) {
    return str.find(target) != string::npos;
}

int solveContest(string log, int duration) {
    int solvedProblems = 0;
    int remainingDuration = duration;
    for(int i = 0; i < log.size(); i++) {
    	if(i >= 1 && (remainingDuration - (log[i] - 'A' + 1) >= 0)) {
    		if(log[i] == log[i-1]) {
    			int problemTime1 = log[i] - 'A' + 1;
    			remainingDuration = remainingDuration - problemTime1;
    			//cout<<remainingDuration<<endl;
    			//cout<<solvedProblems<<endl;
    		} else {
    			int problemTime2 = log[i] - 'A' + 1;
    			remainingDuration = remainingDuration - problemTime2;
    			solvedProblems++;
    			//cout<<remainingDuration<<endl;
    			//cout<<solvedProblems<<endl;
    		}
    	}
    	if(i == 0) {
    		remainingDuration = remainingDuration - (log[i] - 'A' + 1);
    		solvedProblems++;
    		//cout<<remainingDuration<<endl;
    		//cout<<solvedProblems<<endl;
    	}
    }
    return solvedProblems;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int contestDuration;
        cin >> contestDuration;

        string log;
        cin >> log;

        int result = solveContest(log, contestDuration);
        cout << result << endl;
    }

    return 0;
}

