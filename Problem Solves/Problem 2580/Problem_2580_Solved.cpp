#include <iostream>
#include <cmath>
using namespace std;

int sudoku[10][10];

bool CheckingSudoku(int pos, int n) {
    int x = (pos % 9);
    int y = (pos / 9);
    int bigX = (x / 3) * 3;
    int bigY = (y / 3) * 3;
    for (int i = 0; i < 9; i++) {  
        if (sudoku[i][x] == n || sudoku[y][i] == n || sudoku[bigY + i / 3][bigX + i % 3] == n) return false;
    }
    return true;
}

bool CheckingEnd() {
    for (int i = 0; i < 81; i++) {
        int x = (i % 9);
        int y = (i / 9);
        if (sudoku[y][x] == 0) return false;
    }
    return true;
}

bool SolvingSudoku(int pos) {
    if (pos >= 81) {
        return CheckingEnd();
    }

    int x = (pos % 9);
    int y = (pos / 9);

    if (sudoku[y][x] != 0) {
        return SolvingSudoku(pos + 1);
    }

    for (int i = 1; i <= 9; i++) {
        if (CheckingSudoku(pos, i)) {
            sudoku[y][x] = i;
            if (SolvingSudoku(pos + 1)) return true;    
            sudoku[y][x] = 0;
        }
    }

    return false;
}

int main()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
        }
    }

    SolvingSudoku(0);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}