#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    //vector<int> nums = {1,2,1,3,5,6,4};
    vector<int> nums = {5,3,1,6,4,2};
    int size = nums.size(),left = 0,right,mid;
    right = size - 1;

    if (size == 1)
        cout << "0";

    while(left <= right)
    {
        mid = (left + right) / 2;
        if (mid == 0) {
            if (nums[mid] > nums[mid + 1])
                cout << mid;
        }else if (mid == size - 1) {
            if (nums[mid] > nums[mid - 1])
                cout << mid;
        }else {
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                cout << mid;
            }
        }

        if (nums[mid + 1] > nums[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

}