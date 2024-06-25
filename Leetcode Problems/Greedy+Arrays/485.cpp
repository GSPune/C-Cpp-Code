/*485. Max Consecutive Ones*/

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int sz = nums.size(),cur = 0,res = 0;
    for(int i = 0; i < sz; ++i){
        if(nums[i] == 1){
            cur++;
        }
        else{
            res = max(res,cur);
            cur = 0;
        }
    }

    return max(res,cur);
}

int main(){
    vector<int> n = {1,1,1,0,1,1,1,1};
    cout << findMaxConsecutiveOnes(n);
    return 0;
}