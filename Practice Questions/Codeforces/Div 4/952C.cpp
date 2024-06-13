//C.Good Prefixes
/*For each test case, output a single integer — the number of good non-empty 
prefixes of the array a.*/

#include <bits/stdc++.h>
using namespace std;

void goodPrefixes(vector<int>& nums,int n){
    int max = 0,count = 0;
    long long sum = 0;
    if (nums[0] == 0)
        count++;
    for(int i = 1; i < n; ++i){
        max = *max_element(nums.begin(),nums.begin()+i+1);
        //The result of accumulating init and all the elements in the range [first,last).
        sum = accumulate(nums.begin(),nums.begin()+i+1,(long long)0);
        if(sum - max == max)
            count++;
    }
    cout << count << endl;
}

int main(){
    int cases,size;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> size;
        vector<int> elememts(size,0);
        for(auto &e:elememts)
            cin >> e;
        goodPrefixes(elememts,size);
    }
    return 0;
}