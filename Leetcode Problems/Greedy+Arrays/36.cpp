/*Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated*/
#include <bits/stdc++.h>
using namespace std;

// bool stopRet = false;
class Solution {
private:
    static const int N = 4;// = 9;
public:
    bool isSafe(vector<vector<char>>& board,int r,int c,int nums){
        
        // for(int i = 0; i < N; ++i){
        //     if(i != c && i != r){
        //         if(board[r][i] == char(nums+'0') || board[i][c] == char(nums+'0'))
        //             return false;
        //     }
        // }

        //checking the row and column c
        for(int i = 0; i < N; ++i){
            if(i != c){
                if(board[r][i] == char(nums+'0')){
                    return false;
                }
            }
        }

        for(int i = 0; i < N; ++i){
            if(i != r){
                if(board[i][c] == char(nums+'0')){
                    return false;
                }
            }
        }

        //checking the sub-grids
        int s = sqrt(N);
        int rS = r - (r%s);
        int cS = c - (c%s);
        for(int i = rS; i < (rS+s); ++i){
            for(int j = cS; j < (cS+s); ++j){
                if(i != r || j != c){
                    if(board[i][j] == char(nums+'0'))
                        return false;
                } 
            }
        }

        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(board[i][j] != '.'){
                    if(!isSafe(board,i,j,int(board[i][j]-'0')))
                        return false;
                }
            }
        }
        return true;
    }
};

int main(){
    // Solution *obj = new Solution();
    Solution obj;
    vector<vector<char>> T = {{'1','.','3','.'},{'.','.','2','1'},{'.','1','.','2'},{'2','4','.','.'}};
    cout << obj.isValidSudoku(T) << endl;
    cout << endl;
    return 0;
}