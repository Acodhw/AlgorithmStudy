#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t > 0){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int cx, cy, r, n, count = 0;
        cin >> n;
        while(n > 0){
            cin >> cx >> cy >> r;
            int d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            int d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
           
            if(!(d1 <= r*r && d2 <= r*r)) {
                if(d1 <= r*r) count++;
                if(d2 <= r*r) count++;
            }
            n--;
        }
        cout << count << endl;
        t--;
    }

    return 0;
}