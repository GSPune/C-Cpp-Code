#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int sz = arr.size();
        bool f = false;
        //Sliding Window Approach
        for(int i = 0; i <= sz-3; ++i){
            for(int k = 0; k < 3; ++k){
                if(arr[k+i] % 2 == 0){
                    f = false;
                    break;
                }
                else
                    f = true;
            }
            if (f)
                return f;
        }
        return f;
    }
};