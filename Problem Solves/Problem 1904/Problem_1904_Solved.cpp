#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev = 1, res = 1;
    for (int i = 1; i < n; i++) {
        int tmp = (res + prev) % 15746;
        prev = res;
        res = tmp;
    }

    cout << res;

    return 0;
}