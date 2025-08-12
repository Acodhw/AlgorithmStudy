#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	unordered_set<string> rainbow;
	rainbow.insert("ChongChong");

	while (n--) {
		string ai, bi;
		cin >> ai >> bi;

		if (rainbow.find(ai) != rainbow.end()) rainbow.insert(bi);
		else if (rainbow.find(bi) != rainbow.end()) rainbow.insert(ai);
	}

	cout << rainbow.size();

	return 0;
}