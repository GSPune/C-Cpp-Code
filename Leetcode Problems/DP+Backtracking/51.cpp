/*51. Given an integer n, return all distinct solutions to the n-queens puzzle. 
You may return the answer in any order.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int N;
    
public:
    bool isSafe(vector<string> &board,int r,int c){
        // string q = "Q";
        // string d = ".";
        for(int i = 0; i <= (r-1); ++i){
        //for(int i = (r-1); i >= 0; --i)
            if(board[i][c] == 'Q'){
                return false;
            }
        }
        //check left diagonal
        for(int i = r-1, j = c-1; i >= 0 && j >= 0; --i,--j){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        //check right diagonal
        for(int i = r-1, j = c+1; i >= 0 && j < N; --i,++j){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    //Placing Queens rowise
    vector<vector<string>> solveNQueens(int n) {
        this->N = n;
        // vector<vector<string>> board(N,vector<string>(N));
        vector<vector<string>> solutions;
        string k = "";
        for(int i = 0; i < N; ++i){ k+=".";} //".... for N=4"
        vector<string> board(N,k);
        nQueens(board,0,solutions);
        return solutions;
    }

    void nQueens(vector<string> &board,int row,vector<vector<string>> &sol){
        if(row == N) {
            sol.push_back(board);
            return;
        }

        for(int c = 0; c < N; ++c){
            if(isSafe(board,row,c)){
                board[row][c] = 'Q';
                nQueens(board,row+1,sol);
                board[row][c] = '.';
            }
        }
        // return;
    }
};

int main(){
    // Solution *obj = new Solution();
    Solution obj;
    vector<vector<string>> T = obj.solveNQueens(3);
    cout << "NO of solutions is ::" << T.size() << endl;
    for(const auto &e:T){
        for(const auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}