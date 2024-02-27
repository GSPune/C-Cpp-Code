#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> nums = {20,100,10,12,5,13};
    int size = nums.size();
    for (int i = 0; i < size;i++)
    {
        for (int j = i + 1; j < size;j++)
        {
            for (int k = j + 1; k < size; k ++)
            {
                if (nums[j] > nums[i] && nums[j] < nums[k])
                    {cout << "true";
                    exit(0);}
            }
        }
    }
    cout << "false";
    return 0;
}