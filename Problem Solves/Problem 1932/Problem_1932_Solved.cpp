#include <iostream>
#include <algorithm>
using namespace std;

int nums[501][501];
int maxSum[501][501];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for(int j = 0; j <= i; j++)
			cin >> nums[i][j];

	maxSum[0][0] = nums[0][0];

	for (int i = 1; i < n; i++) {
		maxSum[i][0] = maxSum[i - 1][0] + nums[i][0];
		for (int j = 1; j < i; j++)
		{
			maxSum[i][j] = nums[i][j] + max(maxSum[i - 1][j - 1] , maxSum[i - 1][j]);
		}
		maxSum[i][i] = maxSum[i - 1][i - 1] + nums[i][i];
	}

	int res = -99;

	for (int i = 0; i < n; i++) {
		res = max(maxSum[n - 1][i], res);
	}
	
	cout << res;

	return 0;
}