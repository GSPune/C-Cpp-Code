//32. Longest Valid Parentheses
/*Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
substring.*/
#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
    stack<char> stk;
    int ans = 0, l = 0, sz = s.size();
    for(int i = 0; i < sz; ++i){
        if(s[i] == '(')
            stk.push(s[i]);
        else{
            if(stk.empty()){
                ans = max(ans,l);
                l = 0; //reset length
            }
            else{
                stk.pop();
                l += 2;
            }
        }
    } 
    if(!stk.empty()){
        if(s[sz-1] == ')')
            l-=2;
    }
    ans = max(ans,l);
    return ans;      
}

int main(){
    // string s = ")()())";
    string s = "()(())(";
    cout<<longestValidParentheses(s)<<endl;
    return 0;
}