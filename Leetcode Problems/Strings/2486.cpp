/*2486.
Return the minimum number of characters that need to be appended to 
the end of s so that t becomes a subsequence of s.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int appendCharacters(string s, string t){
    int i = 0, j = 0, c = 0;
    int s1 =  s.length();
    int s2 = t.length();

    while(i < s1 && j < s2){
        if(s[i] == t[j]){
            i++;j++;c++;
        }
        else
            i++;
    }

    return (s2-j);
}

int main(){
    // string s = "coaching", t = "coding";
    string s = "z", t = "abcde";
    cout << appendCharacters(s,t);
    return 0;
}