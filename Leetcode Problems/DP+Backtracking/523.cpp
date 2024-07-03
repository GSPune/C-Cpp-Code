/*523. Continuous Subarray Sum
Given an integer array nums and an integer k, return true if nums has a good subarray
or false otherwise.*/

#include <bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
    int prefixSM = 0;
    unordered_map<int,int> modSeen;
    modSeen[0] = -1;

    for(int j = 0; j < nums.size(); j++){
        prefixSM = (prefixSM + nums[j])%k;

        if(modSeen.find(prefixSM) == modSeen.end()){
            //add 1st seen index of prefix (sum mod) as value.. to hashmap
            modSeen[prefixSM] = j;
        }
        else{
            //check if subarray is greater than size 2
            if((j - modSeen[prefixSM]) > 1){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> n = {23,2,4,6,7};
    int k = 18;
    cout << checkSubarraySum(n,k) << endl;
    return 0;
}
