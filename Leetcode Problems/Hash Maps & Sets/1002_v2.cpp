/*1002. Find Common Characters*/

#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<string> cchars;
    if (words.size() == 1)
        return words;
    int n = words.size();
    
    
    return cchars;  
}

int main(){
    vector<string> words = {"cool","lock","cook"};
    vector<string> answers = commonChars(words);
    for(const auto &e:answers){
        cout << e << ", ";
    }
    cout << endl;
    return 0;
}