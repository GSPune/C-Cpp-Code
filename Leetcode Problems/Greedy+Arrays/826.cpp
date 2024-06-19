//Most Profit Assigning work
/*Return the maximum profit we can achieve after assigning the workers to the jobs.*/
#include<bits/stdc++.h>
using namespace std;

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    sort(difficulty.begin(),difficulty.end());
    sort(profit.begin(),profit.end());
    sort(worker.begin(),worker.end());

    map<int,int> M;
    
    int sz1 = worker.size(), sz2 = difficulty.size(), profits = 0;
    int suitable = -1;

    //map creation
    for(int k = 0; k < sz2; ++k){
        M[difficulty[k]] = profit[k];
    }

    for(int i = 0; i < sz1; ++i){
        int min = INT_MAX;
        for(int j = 0; j < sz2; ++j){
            int comp = (worker[i] - difficulty[j]);
            if(comp >= 0 && comp < min){
                min = comp;suitable = j;
            }
        }
        if(suitable >= 0)
            profits += M[difficulty[suitable]];
    }
    
    return profits;
}

int main(){
    vector<int> d = {85,47,57};
    vector<int> p = {24,66,99};
    vector<int> w = {40,25,25};

    cout << (maxProfitAssignment(d,p,w)) << endl;
    return 0;
}