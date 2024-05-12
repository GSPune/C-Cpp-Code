#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s = "car", t = "rat";

    if(s.length() != t.length())
        cout << "false\n";

    unordered_map <char,int> m1,m2;

    for (const auto &a:s)
        m1[a]++;
    for (const auto &a:t)
        m2[a]++;
    
    for (const auto &e:m1){
        if(m2.find(e.first) != m2.end()){
            if (m2.find(e.first)->second != e.second)
                cout << "false\n";}
        else{
            cout << "false\n";
            exit(0);
        }
    }
    cout << "true\n";

    return 0;
}