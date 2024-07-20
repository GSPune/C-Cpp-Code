#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int i,j,sz = nums.size(),count = 0;
    for (i = 0; i < sz; ++i){
        int sum = 0;
        for(j = i; j < sz; ++j){
            sum += nums[j];
            if (sum == k) count++;
        }
    }  
    return count;  
}