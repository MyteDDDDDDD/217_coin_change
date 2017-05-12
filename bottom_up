#include <iostream>
#include<cstring>
using namespace std;

int dp[8000] = {1};
int coin[5] = { 1,5,10,25,50 };

int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8000-50; j++) {
			dp[j + coin[i]] += dp[j];
		}
	}
	int v;
	cin >> v;
	cout << dp[v] << endl;
	

	return 0;
}
