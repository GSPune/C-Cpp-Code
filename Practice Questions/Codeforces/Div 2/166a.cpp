//A. Verify Password

#include <bits/stdc++.h>
using namespace std;

void strongP(int n,string s){
    // sort(s.begin(),s.end());
    vector<int> V;
    string alph,nums,check;
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i])){
            V.push_back(int(s[i])-48);
        }
        else
            alph = alph + s[i];
    }
    sort(V.begin(),V.end());
    sort(alph.begin(),alph.end());
    for (const auto &e:V){
        nums += char(e+48);
    }
    check = nums + alph;
    // cout << check << endl;
    if (check.compare(s) == 0)
        cout << "YES" << endl ;
    else
        cout << "NO" << endl;
    // cout << s << endl;
}

int main(){
    int cases,n;
    string stg;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> n >> stg;
        strongP(n,stg);
    }
    return 0;
}