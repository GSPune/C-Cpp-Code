#include <bits/stdc++.h>
//wrapper around all the generic libraries in C++
using namespace std;
//to avoid later namespace resolution
#define endl '\n'

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(),nums.end()); //O(nlogn)
    int sz = nums.size();
    for(int i = 0; i < sz; ++i){
        if(i > 0 && nums[i]==nums[i-1]) continue;
        for(int j = i + 1; j < sz; ++j){
            if(j < sz && nums[j]==nums[j-1]) continue;
            int p = j+1, k = sz-1;
            while(p < k){
                int sum = nums[i] + nums[j] + nums[p] + nums[k];
                if (sum < target) p++;
                else if (sum > target) k--;
                else{ 
                    res.push_back({nums[i],nums[j],nums[p],nums[k]});
                    p++;k--;
                    while(p < k && nums[p] == nums[p-1])p++;
                    while(p < k && nums[k] == nums[k+1])k--;
                }
            }
        }
    }
    return res;
}

int main(){
    vector<int> nm = {1,0,-1,0,-2,2};
    vector<vector<int>> sol = fourSum(nm,0);
    for(auto &e:sol){
        for(auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}