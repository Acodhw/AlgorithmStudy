#include <iostream>
using std::cout;
using std::cin;

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	int* queuestack[2];
	cin >> n;
	queuestack[0] = new int[n];	

	int index = 0;
	for (int i = 0; i < n; i++) {
		cin >> queuestack[0][i];
		if (queuestack[0][i] == 0) index++;
		
	}	
	queuestack[1] = new int[index];
	int index2 = index;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (queuestack[0][i] == 0) {
			queuestack[1][--index2] = input;
		}
	}
	int point = 0;

	cin >> m;

	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;
		if (index == 0) cout << input << " ";
		else {
			cout << queuestack[1][point] << " ";
			queuestack[1][point] = input;
			point = (point + 1) % index;
		}
	}

	delete[] queuestack[0];
	delete[] queuestack[1];

	return 0;
}