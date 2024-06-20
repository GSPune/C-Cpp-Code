//Most Profit Assigning work
/*Return the maximum profit we can achieve after assigning the workers to the jobs.*/
#include<bits/stdc++.h>
using namespace std;

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    int sz1 = worker.size(), sz2 = difficulty.size(), netProfit = 0;
    // int suitable = -1;
    map<int,int> M;    
    //map creation
    for(int k = 0; k < sz2; ++k){
        map<int,int>::iterator it = M.find(difficulty[k]);
        if(it != M.end()){
            if(profit[k] > it->second)
                M[difficulty[k]] = profit[k];
        }
        else{
            M[difficulty[k]] = profit[k];
        }
    }

    sort(difficulty.begin(),difficulty.end());
    for (int i = 1; i < sz2; ++i){
        M[difficulty[i]] = max(M[difficulty[i-1]],M[difficulty[i]]);
        // M[difficulty[i-1] > M[difficulty[i]]] ?
    }

    for (int i = 0; i < sz1; ++i) {
        int jp = 0,ability = worker[i];

        //Find the job with just smaller or equal difficulty than ability.
        int l = 0, r = sz2-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(difficulty[mid] <= ability){
                jp = max(jp,M[difficulty[mid]]);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        netProfit += jp;
    }
    
    return netProfit;
}

int main(){
    vector<int> d = {66,1,28,73,53,35,45,60,100,44,59,94,27,88,7,18,83,18,72,63};
    vector<int> p = {66,20,84,81,56,40,37,82,53,45,43,96,67,27,12,54,98,19,47,77};
    vector<int> w = {61,33,68,38,63,45,1,10,53,23,66,70,14,51,94,18,28,78,100,16};

    cout << (maxProfitAssignment(d,p,w)) << endl;
    return 0;
}