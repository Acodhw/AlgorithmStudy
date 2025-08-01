#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::string;

int main()
{
	vector<string> strs;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		strs.push_back(s);
	}

	std::sort(strs.begin(), strs.end());

	int res = 0;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (binary_search(strs.begin(), strs.end(), s)) res++;
	}
	cout << res;
}