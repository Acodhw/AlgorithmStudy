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
            int d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1); // get square of distance from circle centor to start point
            int d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2); // get square of distance from circle centor to arrival point
           
            if(!(d1 <= r*r && d2 <= r*r)) { // if both start and arrival point in circle => not go to out.
                if(d1 <= r*r) count++; // if d1 < square of radious => start point is in circle
                if(d2 <= r*r) count++; // if d1 < square of radious => start arrival is in circle
            }
            n--;
        }
        cout << count << endl; // print count
        t--;
    }

    return 0;
}
