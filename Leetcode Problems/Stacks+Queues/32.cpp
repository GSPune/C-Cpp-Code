//32. Longest Valid Parentheses
/*Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
substring.*/
#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int sz = nums.size(),cur = 0,res = 0;
    for(int i = 0; i < sz; ++i){
        if(nums[i] == 1){
            cur++;
        }
        else{
            res = max(res,cur);
            cur = 0;
        }
    }

    return max(res,cur);
}

int longestValidParentheses(string s) {
    stack<int> stk;
    vector<int> a(s.size(),0);
    int ans = 0, l = 0, sz = s.size();
    for(int i = 0; i < sz; ++i){
        if(s[i] == '(')
            stk.push(i);
        else{
          if(!stk.empty()){
            a[stk.top()] = 1;
            a[i] = 1;
            stk.pop();
          }
          else
          {
            continue;
          }
        }
    } 

    return findMaxConsecutiveOnes(a);      
}

int main(){
    // string s = ")()())";
    string s = "()(()";
    cout<<longestValidParentheses(s)<<endl;
    return 0;
}