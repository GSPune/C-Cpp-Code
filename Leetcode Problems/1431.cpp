#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //vector<int>::iterator it
        vector <bool> result;
        int max = *(max_element(candies.begin(),candies.end()));
        for (int i = 0; i < candies.size(); i++)
        {
            if((candies[i] + extraCandies) >= max)
                result.push_back(1);
            else
                result.push_back(0);
        }
        return result;
    }
};