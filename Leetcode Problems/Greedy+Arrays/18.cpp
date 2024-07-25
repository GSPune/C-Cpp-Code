#include <bits/stdc++.h>
//wrapper around all the generic libraries in C++
using namespace std;
//to avoid later namespace resolution
#define endl '\n'

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        set<vector<int>> unique = {};
        sort(nums.begin(), nums.end()); // O(nlogn)
        int sz = nums.size();
        for (int i = 0; i < sz; ++i) {
            // if (i > 0 && nums[i] == nums[i - 1])
            //     continue;
            for (int j = i + 1; j < sz; ++j) {
                // if (j < sz && nums[j] == nums[j - 1])
                //     continue;
                int p = j + 1, k = sz - 1;
                while (p < k) {
                    long sum = (long)nums[i] + nums[j] + nums[p] + nums[k];
                    if(sum > INT_MAX){ 
                       for (auto e:unique){
                            res.push_back(e);
                        }
                        return res;
                    }
                    if (sum < target)
                        p++;
                    else if (sum > target)
                        k--;
                    else {
                        unique.insert({nums[i], nums[j], nums[p], nums[k]});
                        // res.push_back({nums[i], nums[j], nums[p], nums[k]});
                        p++;
                        k--;
                        // while (p < k && nums[p] == nums[p - 1])
                        //     p++;
                        // while (p < k && nums[k] == nums[k + 1])
                        //     k--;
                    }
                }
            }
        }
        for (auto e:unique){
            res.push_back(e);
        }
        return res;
}

int main(){
    vector<int> nm = {0,0,0,1000000000,1000000000,1000000000,1000000000};
    vector<vector<int>> sol = fourSum(nm,1000000000);
    for(auto &e:sol){
        for(auto &u:e){
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}