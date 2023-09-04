#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n; 
    int x1, y1, r1, x2, y2, r2;
    cin >> n;
    
    while(n > 0){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int distance = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
        
        if(distance == 0 && r1 == 0 && r2 == 0) // Same Position, Both Radious 0 => 1 
            cout << 1 << endl;
        else if(distance == 0 && r1 == r2) // Same Position, Same Radious => infinity(-1)
            cout << -1 << endl;
        else if(distance < ((r1 > r2) ? (r1*r1) : (r2*r2))){ // One circle in other circle
            int sub = (r1-r2)*(r1-r2);
            if(distance < sub) // Radious Difference < Distance => 0
                cout << 0 << endl;
            else if(distance == sub) // Radious Difference = Distance => 1
                cout << 1 << endl;
            else // Radious Difference > Distance => 2
                cout << 2 << endl; 
        }
        else{ 
            int add = (r1+r2)*(r1+r2);
            if(distance < add) // Sum of Radious > Distance => 2
                cout << 2 << endl;
            else if(distance == add) // Sum of Radious = Distance => 1
                cout << 1 << endl;
            else // Sum of Radious < Distance => 0
                cout << 0 << endl;
        }
        n--;
    }
    return 0;
}
