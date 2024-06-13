//C.Good Prefixes
/*For each test case, output a single integer — the number of good non-empty 
prefixes of the array a.*/

#include <bits/stdc++.h>
using namespace std;

void goodPrefixes(vector<int>& nums,int n){
    int mx = 0,count = 0;
    long long sum = 0;
    // if (nums[0] == 0)
    //     count++;
    for(int i = 0; i < n; ++i){
        mx = max(mx,nums[i]);
        sum += nums[i];
        if(sum - mx == mx)
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