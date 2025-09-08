#include <iostream>
#include<algorithm>

using namespace std;

bool comparePair(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

pair<int, int> arr[502];
int dp[502];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i].first;
		cin >> arr[i].second;
	}

	sort(arr + 1, arr + n + 1, comparePair);
	arr[0].first = 0;
	arr[0].second = 0;
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		int now = 0;
		for (int j = 0; j < i; j++) {
			if (arr[j].second < arr[i].second) {
				now = dp[j] > dp[now] ? j : now;
			}
		}
		dp[i] = dp[now] + 1;
	}

	int res = 0;
	for (int i = 1; i <= n; i++) {
		res = dp[i] > res ? dp[i] : res;
	}

	cout << n - res;

	return 0;
}
