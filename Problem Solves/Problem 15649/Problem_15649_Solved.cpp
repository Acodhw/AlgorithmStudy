#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void FindP(int n, int m, int now, vector<int> p, unordered_set<int> hav) {
    if (m == now) {
        for (int i : p) cout << i << " ";
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (hav.find(i) == hav.end()) {
            p.push_back(i);
            hav.insert(i);
            FindP(n, m, now + 1, p, hav);
            p.pop_back();
            hav.erase(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    FindP(n, m, 0, vector<int>(), unordered_set<int>());
    
    return 0;
}