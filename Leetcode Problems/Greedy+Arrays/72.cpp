/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.*/

#include<bits/stdc++.h>
using namespace std;

 void setZeroes(vector<vector<int>>& matrix) {
    set<int> r,c;
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if (matrix[i][j] == 0){
                r.insert(i);
                c.insert(j);
            }
        }
    }

    for(auto &e:r){
        // setRowToZero(matrix,e,cols);
        for(int k = 0; k < cols; ++k)
            matrix[e][k] = 0;
    }

    for(auto &u:c){
        for(int k = 0; k < rows; ++k)
            matrix[k][u] = 0;
    }
}

int main(){
    vector<vector<int>> M = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(M);
    for(const auto &e:M){
        for(const auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}