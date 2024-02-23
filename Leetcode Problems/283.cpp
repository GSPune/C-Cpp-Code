#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
    vector <int> nums = {0,1,0,3,12};
    int zeroes = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            zeroes++;
    }

    for (int j = 0; j < zeroes; j++)
    {
        for(int k = 0; k < nums.size() - 1; k++){
            if(nums[k] == 0 and nums[k+1] != 0)
            {
                swap(nums[k],nums[k+1]);
            }
        }
    }

    /*
    j = 0;
    for i from 0 to size
        if num[i] != 0 
            swap(num[i],num[j]);j++;
    */

    for (int i = 0; i < nums.size(); i++)
    {
       cout << nums[i] << " ";    
    }


    return 0;
}