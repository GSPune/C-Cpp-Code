#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)

vector<double> productMV(vector<vector<double>> T,vector<double> x){
    int rows = T.size();
    int cols = T[0].size();
    vector<double> res(rows);
    for(int i =0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            res[i] += T[i][j]*x[j];
        }
    }
    return res;
}

double powerMethod(vector<vector<double>> T,vector<double> x,int r,int c){
    vector<double> res(r);
    res = productMV(T,x);
    // for (auto e : res) cout << e << endl;
    //update x
    for(int k = 0; k < c; ++k) x[k] = ;
}

int main(){
    int r,c;
    cout << "Enter the number of rows and cols" << endl;
    cin >> r >> c;
    vector<vector<double>> A(r,vector<double>(c));
    cout << "Enter the elements one by one" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> A[i][j];
        }
    }
    vector<double> x(c);
    FOR(i,0,c) {
        if(i == 0) x[i] = 1;
        else x[i] = 0;
    }
    powerMethod(A,x,r,c);
    return 0;
}


