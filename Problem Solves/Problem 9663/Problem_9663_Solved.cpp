#include <iostream>
#include <cmath>
using namespace std;

int arr[16];
int res = 0;

bool CheckingCanDropQueen(int now, int cnt) {
    for(int i = 0; i < cnt; i++){
        if(arr[i] == now) return false;
        if (abs(arr[i] - now) == (cnt - i)) return false;
    }
    return true;
}

void CheckQueen(int n, int cnt) {
    if (n == cnt) {
        res++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (CheckingCanDropQueen(i, cnt)) {
            arr[cnt] = i;
            CheckQueen(n, cnt + 1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    
    CheckQueen(n, 0);
    
    cout << res;

    return 0;
}