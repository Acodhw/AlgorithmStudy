#include <iostream>

using namespace std;

int dp[1002];
int arr[1002];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		int now = 0;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) 		
				now = dp[j] > dp[now] ? j : now;				
			
		}
		dp[i] = dp[now] + 1;
	}
	int res = 0;
	for (int i = 1; i <= n; i++) {
		res = res < dp[i] ? dp[i] : res; 
	}
	cout << res;
	return 0;
}
