#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using std::cout;
using std::cin;
using std::vector;
using std::map;

int main()
{
	int n;
	cin >> n;
	vector<int> ls;
	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		ls.push_back(in);
	}

	int avg = 0;
	int max = -900000, min = 900000;
	for (int i = 0; i < n; i++) {
		avg += ls.at(i);
		if (max < ls.at(i)) max = ls.at(i);
		if (min > ls.at(i)) min = ls.at(i);
	}
	cout << (int)std::round(avg * 1.0f / n) << "\n";

	vector<int> ls2(ls);

	std::sort(ls2.begin(), ls2.end());
	cout << ls2.at((n / 2)) << "\n";

	map<int, int> bin;

	for (int i = 0; i < n; i++) {
		if (bin.find(ls.at(i)) == bin.end()) {
			bin[ls.at(i)] = 1;
		}
		else bin[ls.at(i)] += 1;
	}
	
	int choebin = -99999999;
	int bindo = -9;
	bool is2ndSmall = false;
	for (map<int, int>::iterator iter = bin.begin(); iter != bin.end(); iter++) {
		if (iter->second == bindo && !is2ndSmall) {
			is2ndSmall = true;
			choebin = iter->first;
		}
		if (iter->second > bindo) {
			is2ndSmall = false;
			choebin = iter->first;
			bindo = iter->second;
		}
	}
	cout << choebin << "\n";

	cout << max - min << "\n";
}