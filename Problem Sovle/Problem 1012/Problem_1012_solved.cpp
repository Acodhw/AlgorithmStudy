#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef struct _Point {
	long long x;
	long long y;
	_Point(long long _x = 0, long long _y = 0) { x = _x; y = _y; }

	_Point operator+(_Point& ref)
	{
		return _Point(x + ref.x, y + ref.y);
	}

	_Point operator-(_Point& ref)
	{
		return _Point(x - ref.x, y - ref.y);
	}

	bool operator==(const _Point& ref)
	{
		return (x == ref.x && y == ref.y);
	}
} Point;

int main() {
	int t;
	cin >> t;
	while (t > 0) {
		int m, n, k;
		int farm[51][51] = { 0, };
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			farm[y][x] = 1;
		}

		int count = 0;
		vector<Point> already;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (farm[i][j] == 1 && find(already.begin(), already.end(), Point(i, j)) == already.end()) {
					queue<Point> vecQueue;
					vecQueue.push(Point(i, j));
					already.push_back(Point(i, j));
					do {
						Point endPoint = vecQueue.front();
						vecQueue.pop();
						int k;
						if (endPoint.x > 0) {
							if (farm[endPoint.x - 1][endPoint.y] == 1) {
								k = endPoint.x - 1;
								if (find(already.begin(), already.end(), Point(k, endPoint.y)) == already.end()) {
									vecQueue.push(Point(k, endPoint.y));
									already.push_back(Point(k, endPoint.y));
								}

							}
						}
						if (endPoint.y > 0) {
							if (farm[endPoint.x][endPoint.y - 1] == 1) {
								k = endPoint.y - 1;
								if (find(already.begin(), already.end(), Point(endPoint.x, k)) == already.end()) {
									vecQueue.push(Point(endPoint.x, k));
									already.push_back(Point(endPoint.x, k));
								}

							}
						}
						if (endPoint.x < n) {
							if (farm[endPoint.x + 1][endPoint.y] == 1) {
								k = endPoint.x + 1;
								if (find(already.begin(), already.end(), Point(k, endPoint.y)) == already.end()) {
									vecQueue.push(Point(k, endPoint.y));
									already.push_back(Point(k, endPoint.y));
								}

							}
						}
						if (endPoint.y < m) {
							if (farm[endPoint.x][endPoint.y + 1] == 1) {
								k = endPoint.y + 1;
								if (find(already.begin(), already.end(), Point(endPoint.x, k)) == already.end()) {
									vecQueue.push(Point(endPoint.x, k));
									already.push_back(Point(endPoint.x, k));
								}

							}
						}
					} while (!vecQueue.empty());
					count++;
				}
			}
		}
		cout << count << endl;
		t--;
	}
	return 0;
}