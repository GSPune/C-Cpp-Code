//Remove Element

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int sz = nums.size();
    int j = 0;

    for(int i = 0; i < sz; ++i){
        if(nums[i] != val){
            nums[j] = nums[i];
            ++j;
        }
    } 
    return j;     
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout << removeElement(nums,val) << endl;
    return 0;
}