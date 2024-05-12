#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string trim(string a)
{
    int i,j;
    string ans,n;
    for (i = 0; i < a.size(); i++)
        if (a[i] != ' '){break;}
    for (j = a.size() - 1; j > -1; j--)
        if (a[j] != ' '){break;}
    n = a.substr(i,j-i+1);
    for (i = 0; i < n.size(); i++)
    {
        if (n[i] != ' ')
        {
            ans += n[i];
        }
        else
        {
            ans += n[i];//take in the first space only
            while (n[i] == ' ')
            {
                i++;
            }
            i--;
        }    
    }
    return ans;
}

int main(void)
{
    string s = "the sky is blue",ans = "";
    s = trim(s);
    vector <string> words;
    int curr = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if(s[i] == ' ' || i == s.size())
        {
            words.push_back(s.substr(curr,i-curr));
            curr = i+1;
        }
    }

    for (int j = words.size() - 1; j > 0; j--)
    {
        ans += words[j] + " ";
    }

    ans+= words[0];

    cout << ans;
    return 0;
}