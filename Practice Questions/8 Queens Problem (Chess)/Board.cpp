#include <bits/stdc++.h>
// #include "Queen.cpp"
#include "Board.hpp"
using namespace std;

Board::Board(){
    // Initialize the chessboard with empty cells
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            board[i][j] = '-';
        }
    }
}

bool Board::isSafe(int r,int c){
    // only c queens have been previously placed.
    for (int k = 0; k < c; k++){
        if (Q[k].canAttack(r,c))
            return false;
    }
    return true;
}

bool Board::SolveRecursively(int col){
    // all Queens placed
    if (col == N) return true;

    // go across each row position of current column
    for(int i = 0; i < N; i++){
        if (isSafe(i,col)){
            Q[col].row = i;
            Q[col].column = col;
            if (SolveRecursively(col + 1))
                return true;
            Q[col].row = -1;
            Q[col].column = -1;
        }
    }
    return false;
}

bool Board::Solve(){
    if (SolveRecursively(0) == false){
        return false;
    }
    else{
        for (int i = 0; i < N; i++){
            board[Q[i].row][Q[i].column] = 'Q'; 
        }
        // displayBoard();
        return true;
    }
}

void Board::displayBoard(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}