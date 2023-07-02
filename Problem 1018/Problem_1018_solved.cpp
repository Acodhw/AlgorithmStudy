#include<iostream>

using namespace std;

int main()
{
    int n, m;
    char chess[51][51];
    char Wstart[9][9] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };
    char Bstart[9][9] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> chess[i][j];
        }
    }
    int min = 999999999;
    for(int i = 0; i < n - 7; i++){
        for(int j = 0; j < m - 7; j++){
            int w = 0, b = 0;
            for(int k = i; k < i + 8; k++){
                for(int l = j; l < j + 8; l++){
                    if(Wstart[k - i][l - j] != chess[k][l]) w++;
                    if(Bstart[k - i][l - j] != chess[k][l]) b++;
                }
            }
            int minWB = (w < b) ? w : b;
            min = (min > minWB) ? minWB : min;
        }
    }
    
    cout << min << endl;
    
    return 0;
}
