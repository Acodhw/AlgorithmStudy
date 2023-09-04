#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int t;
    cin >> t;
    while(t > 0){
        int n, m;
        cin >> n >> m;
        if(n == m) cout << 1 << endl;
        else{
            n = (n > (m/2)) ? m-n : n;
            long long res = 1;
            for(int i = m; i > (m-n); i--){
                res *= i;
            }
            for(int i = 1; i <= n; i++){
                res /= i;
            }
            cout << res << endl;
        }
        t--;
    }
    return 0;
}