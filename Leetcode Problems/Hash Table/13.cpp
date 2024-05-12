#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
    unordered_map <string,int> m1;
    m1["I"] = 1;
    m1["V"] = 5;
    m1["X"] = 10;
    m1["L"] = 50;
    m1["C"] = 100;
    m1["D"] = 500;
    m1["M"] = 1000;
    m1["IV"] = 4;
    m1["IX"] = 9;
    m1["XL"] = 40;
    m1["XC"] = 90;
    m1["CD"] = 400;
    m1["CM"] = 900;

    int a = 0;bool f = false;
    for (int i = 0; i < s.length(); ++i){
        if(s[i] == 'I' ||s[i] == 'X' ||s[i] == 'C'){
            string t2(1,s[i]);
            if (i != s.length()-1){
                t2 += s[i+1];
                if (m1.find(t2) != m1.end()){
                    a += m1[t2];
                    ++i;
                    f = true;
                }
            }
        }
        if (!f){
            a += m1[string(1,s[i])];
        }
        f = false;
    }
    return a;
  }
};