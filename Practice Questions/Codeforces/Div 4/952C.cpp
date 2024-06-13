//C.Good Prefixes
/*For each test case, output a single integer — the number of good non-empty 
prefixes of the array a.*/

#include <bits/stdc++.h>
using namespace std;

void goodPrefixes(vector<int>& nums,int n){
    int max = 0,sum = 0,count = 0;
    for(int i = 0; i < n; ++i){
        max = *max_element(nums.begin(),nums.begin()+i);
        sum = accumulate(nums.begin(),nums.begin()+i,0);
        if(max-sum == max)
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