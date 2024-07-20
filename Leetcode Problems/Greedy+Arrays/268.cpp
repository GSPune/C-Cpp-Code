#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        int sum = (sz*(sz+1))/2;
        return sum - accumulate(nums.begin(), nums.end(), 0);
    }
};