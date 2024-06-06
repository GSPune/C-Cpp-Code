/*1002. Find Common Characters*/

#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<string> cchars;
    if (words.size() == 1)
        return words;
    int n = words.size();
    
    map<char,vector<int>> freq;

    for(int i = 0; i < 26; ++i){
        vector<int> r(n,0);
        freq[char(i+'a')] = r;
    }

    for (int k = 0; k < n; ++k){
        for(auto &ch : words[k]){
            (freq[ch])[k]++;
        }
    }

    for (auto &m:freq){
        int min = *min_element(m.second.begin(),m.second.end());
        if (min){
            for (int j = 0; j < min; j++){
                cchars.push_back(string(1,m.first));
            }
        }
    }
    return cchars;  
}

int main(){
    vector<string> words = {"bella","label","roller"};
    // vector<string> words = {"cool","lock","cook"};
    vector<string> answers = commonChars(words);
    for(const auto &e:answers){
        cout << e << ", ";
    }
    cout << endl;
    return 0;
}