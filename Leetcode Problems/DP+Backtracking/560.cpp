#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    int s=0,ans = 0;
    m[0] = 1; //0 prefix sum incase 1st element is k
    for(auto n:nums){
        s+=n;
        ans += m[s-k];
        m[s]++;
    }

    return ans;

    // int i,j,sz = nums.size(),count = 0;
    // for (i = 0; i < sz; ++i){
    //     int sum = 0;
    //     for(j = i; j < sz; ++j){
    //         sum += nums[j];
    //         if (sum == k) count++;
    //     }
    // }  
    // return count;  
}