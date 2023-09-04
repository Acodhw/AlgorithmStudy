#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _Point{
    long long x;
    long long y;
    _Point(long long _x = 0, long long _y = 0) {x = _x; y = _y;}
    
    _Point operator+(_Point &ref)
	{
		return _Point(x + ref.x, y + ref.y);
	}
	
	_Point operator-(_Point &ref)
	{
		return _Point(x - ref.x, y - ref.y);
	}
	
} Point;



double GetLength(Point p){
    return sqrt((p.x*p.x)+(p.y*p.y));
}

int main() {
    int t;
    cin >> t;
    Point points[20];
    cout.precision(16);
    while(t > 0){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> points[i].x >> points[i].y;
        }
        
        
        
        double minLength = -1;
        
        vector<int> tmp;
 
        for (int i = 0; i < (n/2); i++){
            tmp.push_back(1);
        }
        for (int i = 0; i < (n/2); i++){
            tmp.push_back(0);
        }
        sort(tmp.begin(), tmp.end());
        do
        {
            Point p;
            vector<int> pointsNum;
            for(int i = 0; i < n; i++){
                pointsNum.push_back(i);
            }
            for (int i = 0; i < tmp.size(); i++)
            {
                if (tmp[i] == 1)
                { 
                    p = p + points[pointsNum[i]];
                }
                if (tmp[i] == 0)
                { 
                    
                    p = p - points[pointsNum[i]];
                }
            }
            minLength = (GetLength(p) < minLength || minLength == -1) ? GetLength(p) : minLength;
            
        } while (next_permutation(tmp.begin(), tmp.end()));
        cout << minLength << endl;
        t--;
    }

    return 0;
}