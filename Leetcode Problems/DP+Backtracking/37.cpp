/*Write a program to solve a Sudoku puzzle 9*9 by filling the empty cells.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    static const int N = 9;
public:
    bool isSafe(vector<vector<char>>& board,int r,int c,int nums){
        //checking the row and column c
        for(int i = 0; i < N; ++i){
            if(board[r][i] == nums || board[i][c] == nums)
                return false;
        }

        //checking the sub-grids
        int rS = r - (r%3);
        int cS = c - (c%3);
        for(int i = rS; i < (rS+3); ++i){
            for(int j = cS; j < (cS+3); ++j){
                if(board[i][j] == nums)
                    return false;
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        int r = -1,c = -1;
        bool isEmpty = false; // finding an empty cell

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(board[i][j] = '.'){
                    r = i; c = j;
                    isEmpty = true;
                    break;
                }
            }
        }

        //No empty cell found..STOP!
        if(!isEmpty)
            return;

        for(int i = 1; i < 10; ++i){
            if(isSafe(board,r,c,i)){
                board[r][c] = char(i+'0');
                solveSudoku(board);
                board[r][c] = '.';
            }  
        }
        return;
    }
};