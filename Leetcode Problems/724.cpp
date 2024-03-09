#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sz = nums.size();
        int total = accumulate(nums.begin(),nums.end(),0);
        vector<int> ps(sz);
        ps[0] = 0;

        for (int j = 1; j < sz; j++)
        {
            ps[j] = ps[j-1] + nums[j-1];
        }

        for (int i = 0; i < sz; i++)
        {
            int rs = total - (ps[i] + nums[i]);
            if (ps[i] == rs)
                return i;
        }
        return -1;
    }
};