#include <iostream>
#include <algorithm>
using namespace std;

int added [1000002];
long long resadd[1002];
long long index[1002];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> added[i];
		added[i] %= m;
		added[i] = (added[i] + added[i - 1]) % m;
	}

	for (int i = 1; i <= n; i++) {
		if (added[i] == 0) resadd[0]++;
		resadd[added[i]] += index[added[i]];
		index[added[i]]++;
	}

	long long res = 0;

	for (int i = 0; i < m; i++) res += resadd[i];

	cout << res;
	return 0;
}
