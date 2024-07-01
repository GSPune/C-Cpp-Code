/*661. Image Smoother*/

#include <bits/stdc++.h>
using namespace std;

int avg(vector<vector<int>>& M,int r,int c){
    int sum = 0, cnt = 0;
    int rows = M.size();
    int cols = M[0].size();

    int startRI = (r == 0) ? r : r-1;
    int startCI = (c == 0) ? c : c-1;
    int endRI = (r == rows-1) ? r : r+1;
    int endCI = (c == cols-1) ? c : c+1;

     for(int i = startRI; i <= endRI; ++i){
        for(int j = startCI; j <= endCI ; ++j){
            sum += M[i][j];
            ++cnt;
        }
    }
    return floor(sum/(double)cnt);
}

vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    int m = img.size();
    int n = img[0].size();
    vector<vector<int>> imgSmoother(m,vector<int>(n));

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            imgSmoother[i][j] = avg(img,i,j);
        }
    }
    return imgSmoother;
}

int main(){
    vector<vector<int>> M = {{100,200,100},{200,50,200},{100,200,100}};
    vector<vector<int>> a = imageSmoother(M);
     for(const auto &e:a){
        for(const auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}