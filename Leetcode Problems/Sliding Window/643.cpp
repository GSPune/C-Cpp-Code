#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main(void)
{
    vector <int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    int sum = accumulate(nums.begin(),nums.begin()+k,0);
    int sum2 = sum;
    for(int i = 1; i < nums.size()-k; i++)
    {
        sum2 = sum2 - nums[i-1] + nums[i + k - 1];
        sum = (sum2 > sum)? sum2 : sum;
    }
    cout << ((double)sum/k) << endl;
    return 0;

}