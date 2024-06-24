#include<bits/stdc++.h>
using namespace std;

int main() {
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	vector<int> dist = {x1, x2, x3};
	sort(dist.begin(), dist.end());
	int cog = dist[1];
	int d = abs(x1 - cog) + abs(x2 - cog) + abs(x3 - cog);
	cout << d;
}
