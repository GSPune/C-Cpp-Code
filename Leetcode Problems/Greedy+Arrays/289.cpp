//289. Game of Life

#include<bits/stdc++.h>
using namespace std;

int getAlive(vector<vector<int>>& M,int r,int c){
    int ans = 0;
    int rows = M.size();
    int cols = M[0].size();

    int startRI = (r != 0) ? r-1 : 0;
    int startCI = (c == 0) ? c : c-1;
    int endRI = (r == rows-1) ? r : r+1;
    int endCI = (c == cols-1) ? c : c+1;

    for(int i = startRI; i <= endRI; ++i){
        for(int j = startCI; j <= endCI ; ++j){
            if(i != r || j != c){
                if(M[i][j] == 1){
                    ans++;
                }
            }    
        }
    }
    return ans;
}

void gameOfLife(vector<vector<int>>& board) {
    int rows = board.size();
    int cols = board[0].size();
    vector<vector<int>> N(rows,vector<int>(cols));
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            int neighbours = getAlive(board,i,j);
            if (board[i][j] == 1){
                if(neighbours == 2 || neighbours == 3){
                    N[i][j] = 1;
                }
                else if(neighbours < 2 || neighbours > 3){
                    N[i][j] = 0;
                }
            }
            else{
                if(neighbours == 3){
                    N[i][j] = 1;
                }
                else{
                    N[i][j] = 0;
                }
            }
        }
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            board[i][j] = N[i][j];        
        }
    }
}

int main(){
    vector<vector<int>> M = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    gameOfLife(M);
     for(const auto &e:M){
        for(const auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}