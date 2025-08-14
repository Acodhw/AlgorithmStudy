#include <iostream>
using namespace std;

bool fractal[6600][6600];

void SetFractal(int n, int x, int y) {
	if (n == 1) {
		fractal[x][y] = true;
		return;
	}
	int diff = n / 3;
	SetFractal(diff, x - diff, y - diff);
	SetFractal(diff, x, y - diff);
	SetFractal(diff, x + diff, y - diff);
	SetFractal(diff, x - diff, y);
	SetFractal(diff, x + diff, y);
	SetFractal(diff, x - diff, y + diff);
	SetFractal(diff, x, y + diff);
	SetFractal(diff, x + diff, y + diff);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	SetFractal(n, (n / 2), (n / 2));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << (fractal[i][j] ? "*" : " ");
		}
		cout << "\n";
	}

	return 0;
}