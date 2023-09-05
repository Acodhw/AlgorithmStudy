#include<iostream>

using namespace std;

int main()
{
    int n;
    int arr[51];
    int arr_index[51];
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr_index[i] = 0;
    }
    
    bool check;
    int next_limit = -1;
    int index = 0;
    do {
        
        int min = 9999999;
        check = false;
        for(int i = 0; i < n; i++){
            if(next_limit < arr[i] && arr[i] < min){
                min = arr[i];
                check = true;
            }
        }
        if(check){
            for(int i = 0; i < n; i++){
                if(arr[i] == min){
                    arr_index[i] = index++;
                }
            }
        }
        next_limit = min;
    }while(check);
    
    for(int i = 0; i < n; i++)
        cout << arr_index[i] << " ";
    cout << endl;
    
    return 0;
}
