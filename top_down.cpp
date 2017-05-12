#include <iostream>
#include<cstring>
using namespace std;

int coin[5] = { 1,5,10,25,50 };
int dp[8000][5];

int dpCoin(int v,int n) {
	
	if (dp[v][n] != -1) {
		return dp[v][n];
	}
	dp[v][n] = 0;
	for (int i = n; i < 5; i++) {
		if (v >= coin[i])
			dp[v][n] += dpCoin(v - coin[i], i);

	}
	return dp[v][n];
}
int main() {
	memset(dp, -1, sizeof(dp));
	
	int v;
	for (int i = 0; i < 5; i++) {
		dp[0][i] = 1;
	}
	cin >> v;
	while (!cin.eof()) {
		cout << dpCoin(v, 0)<<endl;
		cin >> v;
	}
	
	return 0;
}
