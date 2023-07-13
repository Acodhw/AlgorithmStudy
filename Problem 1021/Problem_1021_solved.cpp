#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int f[5000];
    vector<int> q;
    
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> f[i];
    }
    for(int i = 0; i < n; i++){
        q.push_back(i + 1);
    }
    
    int pivot = 0, count = 0;
    for(int i = 0; i < m; i++){
        if(q.at(pivot) == f[i]){
            q.erase(q.begin() + pivot);
            n--;
            if(pivot >= n){
                pivot = n - pivot;
            }
        }
        else{
            int point = find(q.begin(), q.end(), f[i]) - q.begin();
            int n_looped = (pivot > point ? (pivot - point) : (point - pivot)); 
            int looped = n - n_looped;
            pivot = point;
            count += (n_looped > looped ? looped : n_looped);
            q.erase(q.begin() + pivot);
            n--;
            if(pivot >= n){
                pivot = n - pivot;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
