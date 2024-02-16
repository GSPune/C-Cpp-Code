#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int sz1 = word1.size(), sz2 = word2.size(), i = 0, j = 0;
        while(i < sz1 || j < sz2)
        {
            if (i < sz1)
            {
                ans += word1[i++];
            }
            if (j < sz2)
            {
                ans += word2[j++];
            }
        }
        return ans;
    }
};