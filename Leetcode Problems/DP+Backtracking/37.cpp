/*Write a program to solve a Sudoku puzzle 9*9 by filling the empty cells.*/
#include <bits/stdc++.h>
using namespace std;

// bool stopRet = false;
class Solution {
private:
    static const int N = 4;// = 9;
public:
    bool isSafe(vector<vector<char>>& board,int r,int c,int nums){
        //checking the row and column c
        for(int i = 0; i < N; ++i){
            if(board[r][i] == char(nums+'0') || board[i][c] == char(nums+'0'))
                return false;
        }

        //checking the sub-grids
        int s = sqrt(N);
        int rS = r - (r%s);
        int cS = c - (c%s);
        for(int i = rS; i < (rS+s); ++i){
            for(int j = cS; j < (cS+s); ++j){
                if(board[i][j] == char(nums+'0'))
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board){
        int r = -1,c = -1;
        bool isEmpty = false; // finding an empty cell

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(board[i][j] == '.'){
                    r = i; c = j;
                    isEmpty = true;
                    break;
                }
            }
            if(isEmpty)
                break;
        }

        //No empty cell found..STOP!
        if(!isEmpty){
            // stopRet = true;
            return true;
        }

        for(int i = 1; i <= N; ++i){
            if(isSafe(board,r,c,i)){
                board[r][c] = char(i+'0');
                if(solve(board)) return true;
                board[r][c] = '.';
            }  
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

int main(){
    // Solution *obj = new Solution();
    Solution obj;
    vector<vector<char>> T = {{'1','.','3','.'},{'.','.','2','1'},{'.','1','.','2'},{'2','4','.','.'}};
    obj.solveSudoku(T);
    for(const auto &e:T){
        for(const auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}