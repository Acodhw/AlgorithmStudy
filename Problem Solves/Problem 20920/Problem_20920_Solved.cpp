#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second) {
		int al = a.first.length();
		int bl = b.first.length();
		if(al == bl)return a.first < b.first;
		else return  a.first.length() > b.first.length();
	}
	return a.second > b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	map<string, int> eng;

	while (n--) {
		string s;
		cin >> s;
		if (s.length() < m) continue;
		if (eng.find(s) == eng.end()) 
			eng.insert(make_pair(s, 1));	
		else 
			eng[s] += 1;	
	}
	vector<pair<string, int>> engls(eng.begin(), eng.end());

	stable_sort(engls.begin(), engls.end(), cmp);

	for (auto iter = engls.begin(); iter != engls.end(); iter++) {
		cout << iter->first << "\n";
	}
	
	return 0;
}