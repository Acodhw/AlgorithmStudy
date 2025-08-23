#include <iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int max = -2000;
    int before_sum = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num; 
        int sum = (num > before_sum + num) ? num : before_sum + num;
        max = max > sum ? max : sum;
        before_sum = sum;
    }

    cout << max;

    return 0;
}