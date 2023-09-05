#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int i;
    int t;
    cin >> t;
    int *d, *degree, *min;
    int tofrom[100000][2];
    while(t > 0){
        int n, k;
        cin >> n >> k;
        d = new int[n];
        min = new int[n];
        degree = new int[n];
        for(int i=0; i<n; i++)
	        degree[i] = 0;
        for(i = 0; i < n; i++)
            cin >> d[i];
        for(i = 0; i < k; i++){
            cin >> tofrom[i][0] >> tofrom[i][1];
            degree[tofrom[i][1] - 1]++;
        }
        
        stack<int> stk; // Topological Sort
        
        for(i = 0; i < n; i++){ // degree = 0 node add to stack
            min[i] = -1;
            if(degree[i] == 0){
                min[i] = d[i];
                stk.push(i);
                degree[i] = -1;
            }
        }
        while(!stk.empty()){ // loop until stack is empty
            int node = stk.top();
            stk.pop();
            
            int mintime = -99999;
            for(i = 0; i < k; i++){
                if((tofrom[i][0] - 1) == node){
                    degree[tofrom[i][1] - 1]--;
                }
                if(min[node] == -1){
                    if((tofrom[i][1] - 1) == node){
                        mintime = (mintime < (min[tofrom[i][0] - 1] + d[node])) ? (min[tofrom[i][0] - 1]+ d[node]) : mintime; // node timecost check
                    }
                }
            }
            
            if(min[node] == -1)min[node] = mintime; // timecost set to node
            
            for(i = 0; i < n; i++){
                if(degree[i] == 0){
                    stk.push(i);
                    degree[i] = -1;
                }
            }
        }
        int w;
        cin >> w;
        cout << min[w - 1] << endl; // min time cost print
        t--;
    }
    delete[] d;
    delete[] min;
    delete[] degree; // free memory
    
    return 0;
}