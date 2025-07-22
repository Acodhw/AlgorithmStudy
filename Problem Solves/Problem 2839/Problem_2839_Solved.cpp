#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, res = 9999999;
    bool getRes = false;
    cin >> n;
    
    for(n = n; n > 0; n -= 5){
        if(n % 3 == 0){
            if(count + (n / 3) < res) res = count + (n / 3);
        
            getRes = true;
        }
            
        count++;
    }
    if()
    cout << getRes ? res : -1;
    return 0;
}