// B. Choosing Cubes
// For each test case, output one line — "YES" if the cube will be removed in 
// all cases, "NO" if it will not be removed in any case, "MAYBE" if it may be either 
// removed or left.

#include <bits/stdc++.h>
using namespace std;

void favCube(int n,int f,int k,vector<int> val){
    int favnum = val[f-1];
    sort(val.rbegin(),val.rend());

    if (val[k-1] == val[k]){
        cout << "MAYBE" << endl;
        return;
    }

    for(int i = 0; i < k; i++){
        if(val[i] == favnum)
            cout << "YES" << endl;return;
    }
    cout << "NO" << endl;
}

int main(){
    int cases,n,f,k;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> n >> f >> k;
        vector<int> values(n);
        for (auto &e : values){
            cin >> e;
        }
        favCube(n,f,k,values);
    }
    return 0;
}