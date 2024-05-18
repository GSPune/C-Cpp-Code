// Div4 B.Different String-- @1
// You are given a string s consisting of lowercase English letters.
// Rearrange the characters of s to form a new string r that is not equal to s, or report that it's impossible.

#include <bits/stdc++.h>
using namespace std;

void diff_string(string s){
    // char temp;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i+1])
            continue;
        else{
            swap<char>(s[i],s[i+1]);
            cout << "YES" << endl;
            cout << s << endl;
            return;
            // s[i] = s[i+1];
        }
    }
    cout << "NO" << endl;
}

int main(){
    int cases;
    string st;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        //take in the length of the string
        cin >> st;
        diff_string(st);
    }
    return 0;
}