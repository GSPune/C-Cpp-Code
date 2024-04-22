// #ifndef MYHEADEFILE_H
// #define MYHEADEFILE_H
#include <bits/stdc++.h>
using namespace std;
#include "Queen.hpp"
// #include "Queen.cpp"

class Board{
    // int row,column;
    static const int N = 8;
    char board[N][N];
    // vector<Queen> Q(N);
    Queen Q[N];
    public:
        Board();
        //Wrapper over SolveRec()
        int getN();
        bool Solve();
        bool SolveRecursively(int);
        bool isSafe(int,int);
        void displayBoard();
};
// #endif