#include<iostream>
#include<cmath>

int main(void) {
	int n;
	std::cin >> n;
	std::printf("%d\n", (int)pow((pow(2, n) + 1), 2));
	return 0;
}
