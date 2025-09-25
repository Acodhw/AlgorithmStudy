#include <iostream>
#include <algorithm>
using namespace std;

int added[1028][1028];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> added[i][j];
			added[i][j] += added[i][j - 1] + added[i - 1][j] - added[i - 1][j - 1];
		}
	}

	while (m--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << added[y2][x2] - added[y1 - 1][x2] - added[y2][x1 - 1] + added[y1 - 1][x1 - 1] << "\n";
	}
	return 0;
}
