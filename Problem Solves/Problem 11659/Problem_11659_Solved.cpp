#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int arr[100002];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	while (m--) {
		int i, j;
		cin >> i >> j;
		cout << (arr[j] - arr[i - 1]) << "\n";
	}
	

	return 0;
}
