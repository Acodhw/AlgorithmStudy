#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int t, i, j;
    cin >> t;
    int  cirtagon[10000][2];
    bool  RightcanSetting[10000][2]; 
    bool  DowncanSetting[10000]; 
    while(t>0){
        int n, w, count = 0;
        cin >> n >> w;
        
        for(j = 0; j < 2; j++){
            for(i = 0; i < n; i++){
                cin >> cirtagon[i][j];
                RightcanSetting[i][j] = false;
                DowncanSetting[i] = false; 
            }
        }
        
        for(j = 0; j < 2; j++){
            for(i = 0; i < n; i++){
                RightcanSetting[i][j] = ((n >= 2) && (cirtagon[i][j] + cirtagon[(i+1>=n)?0:i+1][j] <= w));
                if(j == 0){DowncanSetting[i] = (cirtagon[i][j] + cirtagon[i][j+1] <= w); 
                }
            }
        }
        
        for(j = 0; j < 2; j++){
            for(i = 0; i < n; i++){
                
                
                if(DowncanSetting[i] || RightcanSetting[(i-1<0)?n-1:i-1][j] || RightcanSetting[i][j]){
                int a = 999,b = 999,c = 999;
                if(DowncanSetting[i]){
                    a = 0;
                    a = RightcanSetting[i][j] ? (a + 1) : a;
                    a = RightcanSetting[i][(j==0)?1:0] ? (a + 1) : a;
                    a = RightcanSetting[(i-1<0)?n-1:i-1][j] ? (a + 1) : a;
                    a = RightcanSetting[(i-1<0)?n-1:i-1][(j==0)?1:0] ? (a + 1) : a;
                    a = DowncanSetting[i] ? (a + 1) : a;
                }
                if(RightcanSetting[(i-1<0)?n-1:i-1][j] && n >= 2){
                    b = 0;
                    b = RightcanSetting[i][j] ? (b + 1) : b;
                    b = RightcanSetting[(i-1<0)?n-1:i-1][j] ? (b + 1) : b;
                    b = RightcanSetting[(i-2<0)?(n+i-2):i-2][j] ? (b + 1) : b;
                    b = DowncanSetting[(i-1<0)?n-1:i-1] ? (b + 1) : b;
                    b = DowncanSetting[i] ? (b + 1) : b;
                }
                if(RightcanSetting[i][j] && n >= 2){
                    c = 0;
                    c = RightcanSetting[i][j] ? (c + 1) : c;
                    c = RightcanSetting[(i+1>=n)?0:i+1][j] ? (c + 1) : c;
                    c = RightcanSetting[(i-1<0)?n-1:i-1][j] ? (c + 1) : c;
                    c = DowncanSetting[i] ? (c + 1) : c;
                    c = DowncanSetting[(i+1>=n)?0:i+1] ? (c + 1) : c;
                }
                
                if(b==c){
                    int d = 0,e = 0;
                    if(RightcanSetting[(i-2<0)?(n+i-2):i-2][j] && n >= 2){
                    d = RightcanSetting[(i-2<0)?(n+i-2):i-2][j] ? (d + 1) : d;
                    d = RightcanSetting[(i-3<0)?(n+i-3):i-3][j] ? (d + 1) : d;
                    d = DowncanSetting[(i-2<0)?(n+i-2):i-2] ? (d + 1) : d;
                    }
                    if(RightcanSetting[(i+1>=n)?0:i+1][j] && n >= 2){
                    e = RightcanSetting[(i+1>=n)?0:i+1][j] ? (e + 1) : e;
                    e = RightcanSetting[(i+2>=n)?n-i+2:i+1][j] ? (e + 1) : e;
                    e = DowncanSetting[(i+1>=n)?0:i+1] ? (e + 1) : e;
                    e = DowncanSetting[(i+2>=n)?n-i+2:i+1] ? (e + 1) : e;
                    }
                    
                    if(d < e){
                        a++;
                        b++;
                    }
                    else {
                        a++;
                        c++;
                    }
                }
               
                if(a >= b){
                    if(b > c){
                        count++;
                        RightcanSetting[i][j] = false;
                        RightcanSetting[(i+1>=n)?0:i+1][j] = false;
                        RightcanSetting[(i-1<0)?n-1:i-1][j] = false;
                        DowncanSetting[i] = false;
                        DowncanSetting[(i+1>=n)?0:i+1] = false;
                    }
                    else{
                        count++;
                        RightcanSetting[i][j] = false;
                        RightcanSetting[(i-1<0)?n-1:i-1][j] = false;
                        RightcanSetting[(i-2<0)?(n+i-2):i-2][j] = false;
                        DowncanSetting[(i-1<0)?n-1:i-1] = false;
                        DowncanSetting[i] = false;
                    }
                }
                else{
                    if(a >= c){
                        count++;
                        RightcanSetting[i][j] = false;
                        RightcanSetting[(i+1>=n)?0:i+1][j] = false;
                        RightcanSetting[(i-1<0)?n-1:i-1][j] = false;
                        DowncanSetting[i] = false;
                        DowncanSetting[(i+1>=n)?0:i+1] = false;
                    }
                    else{
                        count++;
                        RightcanSetting[i][j] = false;
                        RightcanSetting[i][(j==0)?1:0] = false;
                        RightcanSetting[(i-1<0)?n-1:i-1][j] = false;
                        RightcanSetting[(i-1<0)?n-1:i-1][(j==0)?1:0] = false;
                        DowncanSetting[i] = false;
                        }
                    }
                }
                
                
            }
        }
        cout << ((n*2) - count) << endl;
        
        
        t--;
    }
    
    return 0;
}