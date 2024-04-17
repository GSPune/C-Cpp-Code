#include <bits/stdc++.h>
using namespace std;

bool MyCmp(pair<int,int> a,pair<int,int> b){
    return (a.second < b.second);
}

int maxActivities(pair<int,int> arr[],int n){
    sort(arr,arr+n,MyCmp);
    int prev = 0, res = 1;
    for (int curr = 1; curr < n; curr++){
        if (arr[curr].first < arr[prev].second){
            continue;
        }
        res++;
        prev = curr;
    }
    return res;
}

int main(){
    int n = 3;
    pair<int,int> A[n];
    int a,b;
    for (int i = 0; i < n; i++){
        cout << "Enter the first and second elements of the "<<i+1<<"th pair"<<endl;
        cin >> a >> b;
        A[i] = make_pair(a,b);
    } 
    cout << "The max # of activities possible are " << maxActivities(A,n) << endl;
    return 0;
}