#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    //vector<int> nums = {1,5,0,4,1,3};
    vector<int> nums = {20,100,10,12,5,13};
    int size = nums.size(), i = 0;
    while (i < size - 1){
        int k = i+1;
        while (k < size)
        {
            if (nums[k] > nums[i])
            {
                int j = k+1;
                while(j < size){
                    if (nums[j] > nums[k]){
                        cout << "true\n";
                        exit(0);}
                    j++;
                 }
            }
            k++;
        }
        i++;
    }
    cout << "false\n";
    return 0;
}