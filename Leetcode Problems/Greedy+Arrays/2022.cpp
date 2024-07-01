/*Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original,int m,int n){
    vector<vector<int>> ans(m,vector<int>(n));
    int sz = original.size();
    if(sz != m*n){
        // for(int k = 0; k < m; ++k){
        //     ans[k].clear();
        // }
        vector<vector<int>> ans = {};
        return ans;
    }
    else{
        int i = 0, row = 0;
        while(i < sz){
            for(int j = 0; j < n; ++j){
                ans[row][j] = original[i];
                ++i; // i will increase by n when loop ends.
            }
            row++;
        }
    }
    return ans;
}

int main(){
    vector<int> orig = {7,6,8,4,5,1,2,3,8,5};
    vector<vector<int>> M = construct2DArray(orig,5,2);
     for(const auto &e:M){
        for(const auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}