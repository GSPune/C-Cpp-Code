/*409.Longest Palindrome
Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
palindrome that can be built with those letters.*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int longestPalindrome(string s) {
    int longestLen = 0;
    bool flag = false;
    unordered_map<char,int> freq;

    for(const auto &e:s){
        freq[e]++;
    }

    for(auto &u:freq){
        longestLen += (u.second/2) * 2;
        // freq[u.first] = (u.second%2);
        if (u.second%2 == 1)
            flag = true;
    }

    return flag?++longestLen:longestLen;
}

int main(){
    // string s = "coaching", t = "coding";
    string s = "abccccdd",t="abbbCCCCddddd";
    cout <<  longestPalindrome(t);
    return 0;
}