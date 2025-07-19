#include <iostream>
#include <cstring>
using std::cout;
using std::cin;

int main() {
	int n, res = 0;
	cin >> n;
	while (n--) {
		char str[103];
		bool alpha[26] = {false, };
		bool check = true;
		cin >> str;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == str[i + 1]) continue;
			else if (!alpha[str[i] - 'a']) {
				alpha[str[i] - 'a'] = true;
			}
			else {
				check = false;
				break;
			}
		}
		if (check) res++;
	}
	cout << res;
	return 0;
}