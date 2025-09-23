#include <iostream>
#include <algorithm>
using namespace std;

int added[100002];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
    cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		cin >> added[i];
		added[i] += added[i - 1];
	}

	int res = -900000000;
	for (int i = 0; i < (n - k + 1); i++) {
		res = max(added[i + k ] - added[i], res);
	}

	cout << res;
	return 0;
}
