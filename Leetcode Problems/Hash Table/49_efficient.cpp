/*49.Group Anagrams -- Given an array of strings strs, group the anagrams together.
 You can return the answer in any order.*/

#include <bits/stdc++.h>
using namespace std;

array<int,25> freq_hash(string s){
    //all the characters in a group will have the same frequencies
    array<int,25> frequencies;
    frequencies.fill(0);
    for (int i = 0; i < s.length(); i++){
        frequencies[s[i]-'a']++;
    }
    return frequencies;
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    //unordered_map<array<int,25>,vector<string>> mp;
    map<array<int,25>,vector<string>> mp;
    //Unlike std::unordered_map, std::map does not require a custom hash function for your key type.
    vector<vector<string>> ans;

    for (auto& st:strs){
        mp[freq_hash(st)].push_back(st);
    }

    for (auto &e : mp){
        ans.push_back(e.second);
    }

    for (const auto& e : ans){
        for (const auto& t : e){
            cout << t << ", ";
        }
        cout << endl;
    }
    return 0;
}

