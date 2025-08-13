#include <iostream>
#include <cmath>
using namespace std;

void PrintCantor(int n) {
	if (n == 0) {
		cout << "-";
		return;
	}

	PrintCantor(n - 1);
	for (int i = 0; i < pow(3, n - 1); i++)
		cout << " ";
	PrintCantor(n - 1);
}

int main() {
	int n;
	while (cin >> n) {
		PrintCantor(n);
		cout << "\n";
	}

	return 0;
}