/*Find (Good) words that can be formed by characters!
Return the sum of lengths of all good strings in words.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words = {"cat","bt","hat","tree"};
    string chars = "atach";
    int sum = 0;bool f = false;

    unordered_set<char> s;
    for (int i = 0; i < chars.size(); ++i){
        s.insert(chars[i]);
    }

    for (int j = 0; j < words.size(); ++j){
        //check if each letter exists in set s
        for (const auto &e:words[j]){
            if (s.find(e) == s.end()){
                f = true;
                break;
            }      
        } 
        if (!f){
        sum = sum + words[j].length();}
        f = false;
    }

    cout << sum << endl;
    return 0;
}
