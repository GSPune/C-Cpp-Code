#include <bits/stdc++.h>
using namespace std;

//1st Attempt -- Optimization to be done
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int sz = nums.size(), k = 0;
            for(int i = 0; i < sz - 1; ++i){
                if(nums[i+1] <= nums[i]){
                    k += (nums[i] + 1 - nums[i+1]);
                    nums[i+1] = nums[i] + 1;
                }
            }

            // for(auto e : nums)
            //     cout << e << ", ";
            return k;
        }
};