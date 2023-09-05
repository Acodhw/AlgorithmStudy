#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int cycle[10][4] = {{10,10,10,10},{1,1,1,1},{2,4,8,6},{3,9,7,1},{4,6,4,6},{5,5,5,5},{6,6,6,6},{7,9,3,1},{8,4,2,6},{9,1,9,1}};
    int i, j, t;
    cin >> t;
    while(t > 0){
        int a,b;
        cin >> a >> b;
        int left = (b-1) % 4;
        cout << cycle[(a%10)][left] << endl;
        t--;
    }

    return 0;
}