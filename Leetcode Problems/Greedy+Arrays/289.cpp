//289. Game of Life

#include<bits/stdc++.h>
using namespace std;

bool D1(int i, int j, vector<vector<int>>&N){
    return N[i-1][j] == 1;
}

bool D2(int i, int j, vector<vector<int>>&N){
    return N[i-1][j+1] == 1;
}

bool D3(int i, int j, vector<vector<int>>&N){
    return N[i][j+1] == 1;
}

bool D4(int i, int j, vector<vector<int>>&N){
    return N[i+1][j+1] == 1;
}

bool D5(int i, int j, vector<vector<int>>&N){
    return N[i+1][j] == 1;
}

bool D6(int i, int j, vector<vector<int>>&N){
    return N[i+1][j-1] == 1;
}

bool D7(int i, int j, vector<vector<int>>&N){
    return N[i][j-1] == 1;
}

bool D8(int i, int j, vector<vector<int>>&N){
    return N[i-1][j-1] == 1;
}

int getAlive(vector<vector<int>>& M,int r,int c){
    int ans = 0;
    int rows = M.size();
    int cols = M[0].size();
    //case 1
    if(r == 0 && c == 0){
        if(D4(r,c,M)) ans++;
        if(D3(r,c,M)) ans++;
        if(D5(r,c,M)) ans++;
    }
    else if(r == 0 && c == cols-1){
        if(D7(r,c,M)) ans++;
        if(D6(r,c,M)) ans++;
        if(D5(r,c,M)) ans++;
    }
    else if(r == rows-1 && c == 0){
        if(D1(r,c,M)) ans++;
        if(D2(r,c,M)) ans++;
        if(D3(r,c,M)) ans++;
    }
    else if(r == rows-1 && c == cols-1){
        if(D1(r,c,M)) ans++;
        if(D8(r,c,M)) ans++;
        if(D7(r,c,M)) ans++;
    }

    else if(c == 0){
        if(D1(r,c,M)) ans++;
        if(D2(r,c,M)) ans++;
        if(D3(r,c,M)) ans++;
        if(D4(r,c,M)) ans++;
        if(D5(r,c,M)) ans++;
    }

    else if(r == 0){
        if(D7(r,c,M)) ans++;
        if(D3(r,c,M)) ans++;
        if(D6(r,c,M)) ans++;
        if(D5(r,c,M)) ans++;
        if(D4(r,c,M)) ans++;
    }

    else if(c == cols-1){
        if(D1(r,c,M)) ans++;
        if(D5(r,c,M)) ans++;
        if(D8(r,c,M)) ans++;
        if(D7(r,c,M)) ans++;
        if(D6(r,c,M)) ans++;
    }

    else if(r == rows-1){
        if(D1(r,c,M)) ans++;
        if(D2(r,c,M)) ans++;
        if(D3(r,c,M)) ans++;
        if(D7(r,c,M)) ans++;
        if(D8(r,c,M)) ans++;
    }

    else{
        if(D1(r,c,M)) ans++;
        if(D2(r,c,M)) ans++;
        if(D3(r,c,M)) ans++;
        if(D4(r,c,M)) ans++;
        if(D5(r,c,M)) ans++;
        if(D6(r,c,M)) ans++;
        if(D7(r,c,M)) ans++;
        if(D8(r,c,M)) ans++;
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