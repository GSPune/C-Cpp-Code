#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(void)
{
    string s = "([]})";
    stack<int> stk;
    if (s.length() == 1)
    {
        cout << "false" <<endl;
        exit(0);
    }
    for (int i = 0; i < s.length();  i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stk.push(s[i]);
        }
        else{
            if (stk.empty())
                {cout << "false" <<endl;
                exit(0);}

            if ((s[i] == ')' && stk.top() == '(')||(s[i] == '}' && stk.top() == '{')||(s[i] == ']' && stk.top() == '[')){
                stk.pop();}
            else{
                cout << "false" <<endl;
                exit(0);}
    }}

    stk.size()>0 ? cout << "false" <<endl:cout << "true" <<endl;
    return 0;
};