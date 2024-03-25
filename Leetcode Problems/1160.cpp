/*Find (Good) words that can be formed by (given)characters!
Return the sum of lengths of all good strings in words.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words = {"catt","bt","hat","tree"};
    string chars = "atach";
    int sum = 0;bool f = false;

    unordered_map<char,int> m,mcopy;
    for (int i = 0; i < chars.size(); ++i){
        m[chars[i]]++;
    }

    // mcopy = m;  ?a shallow copy?

    for (int i = 0; i < chars.size(); ++i){
        mcopy[chars[i]]++;
    }

    for (int j = 0; j < words.size(); ++j){
        //check if each letter (of each word in array) exists in map m
        for (const auto &e:words[j]){
            if (m.find(e) == m.end()){
                f = true;
                break;
            }
            else{
                unordered_map <char,int>::iterator got = m.find(e);
                if (got->second > 0)
                    got->second --;
                else{
                    f = true;
                    break;
                }
            }      
        } 
        if (!f){
        sum = sum + words[j].length();}
        f = false;

        for (const auto &e:mcopy){
            m[e.first] = e.second;
        }
            
    }

    cout << sum << endl;
    return 0;
}
