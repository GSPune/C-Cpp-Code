#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
    vector <int> nums = {1,2,3,4};
    int size = nums.size();
    vector <int> prefix_mul(size),suffix_mul(size),ans(size);
    suffix_mul[size - 1] = 1;
    for (int i = size - 2; i > -1 ;i --)
    {
        suffix_mul[i] = suffix_mul[i+1] * nums[i+1];
    }
    prefix_mul[0] = 1;
    for (int j = 1; j < size; j++)
    {
        prefix_mul[j] = prefix_mul[j - 1] * nums[j - 1];
    }
    for (int i = 0; i < size;i++)
    {
        ans[i] = suffix_mul[i] * prefix_mul [i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}