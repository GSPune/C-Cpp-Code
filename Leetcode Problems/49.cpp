/*49.Group Anagrams -- Given an array of strings strs, group the anagrams together.
 You can return the answer in any order.*/

#include <bits/stdc++.h>
using namespace std;


bool is_anagram(string,string);

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"}, groups;
    vector<int> indices;
    vector<vector<string>> ans;

        // for (int i = 0; i < strs.size(); i++){
        while(strs.size()>0){
            for(int j = 1; j < strs.size(); j++){
                if (is_anagram(strs[0],strs[j])){
                    groups.push_back(strs[j]);
                    indices.push_back(j);//indices to delete from string vector
                    
                }
            }

            groups.push_back(strs[0]);
            ans.push_back(groups);
            indices.push_back(0);
            for (const auto& e:indices){
                strs.erase(strs.begin()+e);
                for (auto& m:indices){
                    if (m > e)
                        m--;
                }
            }
            groups.clear();
            indices.clear();
        }

        for (const auto& e : ans){
            for (const auto& t : e){
                cout << t << ", ";
            }
            cout << endl;
        }
        
    return 0;
}

bool is_anagram(string s,string t){
         unordered_map<int, int> m1, m2;

        if(s.length() != t.length())
            return false;

        for (const auto& a : s)
            m1[a]++;
        for (const auto& a : t)
            m2[a]++;

        for (const auto& e : m1) {
            if (m2.find(e.first) == m2.end())//letters must be same in both strings
                return false;
            else{
                if (m2.find(e.first)->second != e.second)//frequncy of letters must be same as well
                    return false;
                }
            }
        return true;
    }