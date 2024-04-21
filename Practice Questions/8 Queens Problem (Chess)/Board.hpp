#include <bits/stdc++.h>
using namespace std;

class Board{
    // int row,column;
    static const int N = 8;
    char board[N][N];
    public:
        Board();
        //Wrapper over SolveRec()
        bool Solve();
        bool SolveRecursively(int);
        bool isSafe(int,int);
        void displayBoard();
};