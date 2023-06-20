#include <iostream>

using namespace std;

int main()
{
    int fibo[40][2]; //Saving How Many called 1 and 0 in fibonacci function
    fibo[0][0] = 1;
    fibo[0][1] = 0;
    fibo[1][0] = 0;
    fibo[1][1] = 1;
    for(int i = 2; i <= 40; i++){
        fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0]; //sum count of called 0 in now number - 1 and now number -2
        fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1]; //sum count of called 1 in now number - 1 and now number -2
    }
    
    int n, m;
    cin >> n;
    while(n > 0){
        cin >> m;
        cout << fibo[m][0] << " " << fibo[m][1] << endl;
        n--;
    }

    return 0;
}