//1.Two 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        map<int,int> M;
        for (int k = 0; k < sz; ++k)
            M[nums[k]] = k;

        for(int i = 0; i < sz; ++i){
            int e = target - nums[i];
            std::map<int,int>::iterator it = M.find(e);
            if(it != M.end() && it->second != i){
                vector<int> ans = {i,M[e]};
                return ans;
            }
        }
        vector<int> ans = {-1,-1};
        return ans;
    }
};


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int sz = nums.size();
//         for(int i = 0; i < sz; ++i){
//             int e = target - nums[i];
//             for(int j = i + 1; j < sz; ++j){
//                 if(nums[j] == e){
//                     vector<int> ans = {i,j};
//                     return ans;
//                 }
//             }
//         }
//         vector<int> ans = {-1,-1};
//         return ans;
//     }
// };