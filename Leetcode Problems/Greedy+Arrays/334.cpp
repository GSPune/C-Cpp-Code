#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> nums = {1,1,-2,6};
    //vector<int> nums = {20,100,10,12,5,13};
    int size = nums.size();
    const int MAX = numeric_limits<int>::max();
    int min = MAX,mid = MAX;
    for (int i = 0; i < size; i++) {
        if (nums[i] > mid){
            cout << "true\n";
            exit(0);}
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > min)
            mid = nums[i];
    }
    //return false;
    cout << "false\n";
    return 0;
}