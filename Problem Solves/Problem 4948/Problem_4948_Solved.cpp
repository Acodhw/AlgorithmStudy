#include <iostream>
using namespace std;

bool isNotprime[246915] = { true, true };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	for (int i = 2; i < 246913; i++) {
		if (!isNotprime[i]) {
			for (int j = i * 2; j < 246913; j += i) {
				isNotprime[j] = true;
			}
		}
	}

	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;
		int res = 0;

		for (int i = n + 1; i <= n * 2; i++) res += (isNotprime[i] ? 0 : 1);
		cout << res << "\n";
	}

	return 0;
}