#include <iostream>
using std::cout;
using std::cin;


int main() {
	char str[120];
	cin >> str;
	int count = 0;
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == '-' || str[i] == '=') {
			continue;
		}
		if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
			continue;
		}
		if (str[i] == 'l' && str[i + 1] == 'j') {
			continue;
		}
		if (str[i] == 'n' && str[i + 1] == 'j') {
			continue;
		}	
		count++;
	}
	cout << count;
	return 0;
}