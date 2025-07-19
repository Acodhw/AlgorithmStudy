#include <iostream>
using std::cout;
using std::cin;

int main() {
	int n;
	bool dohwaji[100][100] = { false, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				dohwaji[j][k] = true;
			}
		}
	}
	int res = 0;
	for (int j = 0; j < 100; j++) {
		for (int k = 0; k < 100; k++) {
			if (dohwaji[j][k]) res++;
		}
	}
	cout << res;
	return 0;
}