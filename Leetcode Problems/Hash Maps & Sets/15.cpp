//15.3 Sum
/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and 
j != k, and nums[i] + nums[j] + nums[k] == 0.*/

#include <bits/stdc++.h>
using namespace std;

//works but fails to clear TLE for a test case
vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> res;
     map<vector<int>,int> removeDuplicates;
     int i,j,e,target;
     int sz = nums.size();

     map<int,int> M;
     for (int k = 0; k < sz; ++k)
        // if(M.find(nums[k]) == M.end())
            M[nums[k]] = k;

     for (i = 0; i < sz; ++i){
        target = 0 - nums[i];
        for(int j = i + 1; j < sz; ++j){
            e = target - nums[j];
            map<int,int>::iterator it = M.find(e);
            if(it != M.end() && it->second > j){
                vector<int> ans = {nums[i],nums[j],e};
                sort(ans.begin(),ans.end());
                removeDuplicates[ans]++;
            }
        }
     }

    for(auto &vec:removeDuplicates)
        res.push_back(vec.first);

     return res;
}

int main(){
    vector<int> nm = {-1,0,1,2,-1,-4};
    vector<vector<int>> sol = threeSum(nm);
    for(auto &e:sol){
        for(auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}