//Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    //Kadane's Algorithm
    int res = nums[0], mx = nums[0];
    for(int i = 1; i < nums.size(); ++i){
        mx = max(nums[i],nums[i]+mx);
        res = max(res,mx);
    }
    return res;    
}

int main(){
    vector<int> n = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(n) << endl;
    return 0;
}