/*1002. Find Common Characters*/

#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<string> cchars;
    if (words.size() == 1)
        return words;
    int n = words.size();
   unordered_map<char,array<int,n>> freq;

    // for(const auto &e:words){
    //     for (const auto &t:e){
    //         // cout << typeid(t).name() << endl;
    //         // cout << t << " ";
    //         freq[t]++;
    //     }
    // }

    //  for(auto &u:freq){
    //    if(u.second % 3 == 0){
    //         for (int k = 0; k < (u.second / 3); ++k){
    //             string random;
    //             random.push_back(u.first);
    //             cchars.push_back(random);
    //         }
    //    }
    // }

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