#include <bits/stdc++.h>
using namespace std;

void rotate_by_one(string &t){
    int sz = t.size();
    char c=t[sz-1];
    for (int i = sz - 1; i > 0 ; --i) {
        t[i] = t[i-1];
    }
    t[0] = c;
}

bool rotateString(string s, string goal) {
    if (s == goal) return true;
    bool flag = false;
    int sz = s.size();
    for(int j = 0; j < sz; ++j){
        rotate_by_one(s);
        if(s == goal) return true;
    }
    return false;
}

int main(){

}