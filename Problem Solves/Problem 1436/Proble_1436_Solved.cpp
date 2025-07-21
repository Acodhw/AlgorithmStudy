#include <iostream>
using std::cout;
using std::cin;

int main() {
	int n, res = 0;
	cin >> n;
	int num = 665;
	while (res < n) {
		num += 1;
		for (int tmp = num; tmp > 1; tmp /= 10) {
			if (tmp % 1000 == 666) {
				res++;
				break;
			}
		}		
	}
	cout << num;
	return 0;
}