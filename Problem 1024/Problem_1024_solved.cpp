#include<iostream>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    
    bool check = false;
    for(int i = l; i <= 100; i++){
        if(i % 2 == 0){
            if(n % i == i / 2){
                if(((n/i)-(i/2)+ 1) < 0) break;
                for(int j = 0; j < i; j++){
                    cout << ((n/i)-(i/2)+ 1) + j << " ";
                }
                cout << endl;
                check = true;
                break;
            }
        }
        else{
            if(n % i == 0){
                if(((n/i)-i/2) < 0) break;
                for(int j = 0; j < i; j++){
                    cout << ((n/i)-i/2) + j << " ";
                }
                cout << endl;
                check = true;
                break;
            }
        }
    }
    
    if(!check) cout << -1 << endl;
    
    return 0;
}
