#include <iostream>
using namespace std;

#define DEVISION 1000000000;

int main() {	
	long long n;
	cin >> n;
	
	long long res = 0;
	long long dp[101][10] = { {0,1,1,1,1,1,1,1,1,1} };
	for (int i = 1; i < n; i++) {
		dp[i][0] =  dp[i - 1][1] % DEVISION;
		for (int j = 1; j < 9; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % DEVISION;
		}
		dp[i][9] = dp[i - 1][8] % DEVISION;
	};

	for (int i = 0; i < 10; i++) {
		res += dp[n - 1][i] % DEVISION
	};
	cout << res % DEVISION;

	return 0;
}