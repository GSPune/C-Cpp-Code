/*1002. Find Common Characters*/

#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<string> cchars;
    if (words.size() == 1)
        return words;
    int n = words.size();
    //unordered_map<char,array<int,n>> freq;
    vector<int> commonC(26),currentC(26);
    
    for(const auto &e:words[0])
        commonC[e-'a']++;
    
    for(int i = 0; i < n; ++i){
        fill(currentC.begin(),currentC.end(),0);

        // Count characters in the current word
        for (char& ch : words[i]) {
            currentC[ch - 'a']++;
        }

        for(int l = 0; l < 26;++l){
            commonC[l] = min(commonC[l],currentC[l]);
        }
    }

    // Collect the common characters based on the final counts
    for (int l = 0; l < 26;++l) {
        if(commonC[l] > 0){
            for(int count = 0; count < commonC[l]; ++count){
                cchars.push_back(string(1,l+'a'));
            }
        }
    }

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