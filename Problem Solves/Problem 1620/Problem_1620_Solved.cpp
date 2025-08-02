#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	map<int, string> pokemon;
	map<string, int> revpokemon;
	int n, m;
	cin >> n >> m; 
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		pokemon.insert({i + 1, s});
		revpokemon.insert({ s, i + 1 });
	}

	while (m--) {
		string s;
		cin >> s;
		try {
			int i = stoi(s);
			cout << pokemon[i] << "\n";
		}
		catch (const std::invalid_argument&) {
			cout << revpokemon[s] << "\n";
		}
	}
}