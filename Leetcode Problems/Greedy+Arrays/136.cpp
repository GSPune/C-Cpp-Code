#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto a:nums) ans^=a;//XOR
        return ans;
    }
};