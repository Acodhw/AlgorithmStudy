#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	unordered_set<string> us;

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < s.length() - i + 1; j++)
		{
			us.insert(string(s.begin() + j, s.begin() + j + i));
		}
	}

	cout << us.size();

	return 0;
}