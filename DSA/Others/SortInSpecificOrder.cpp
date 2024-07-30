#include <bits/stdc++.h>
using namespace std;

void merge(vector<long long> &arr,int l,int m,int r){
    int i,j,k;
    int nL = m - l + 1;
    int nR = r - m;

    vector<int> L(nL),R(nR);
    for(int i = l; i < m+1; ++i) L[i-l] = arr[i];
    for (int j = m+1;j < r+1; ++j) R[j-m-1] = arr[j];

    i = 0; j = 0; k = l;

    while(i < nL && j < nR){
        //both even
        if(L[i] % 2 == 0 && R[j] % 2 == 0) {
            if(L[i] < R[j]) arr[k++] = L[i++];
            else arr[k++] = R[j++];
        }
        //both odd
        else if(L[i] % 2 != 0 && R[j] % 2 != 0){
            if (L[i] < R[j]) arr[k++] = R[j++];
            else arr[k++] = L[i++];
        }
        //even,odd
        else if(L[i] % 2 == 0 && R[j] %2 != 0){
            arr[k++] = R[j++];
        }
        else arr[k++] = L[i++];      
    }

    while (i < nL) arr[k++] = L[i++];
    while (j < nR) arr[k++] = R[j++];
}

void mseo(vector<long long> &nums,int l,int r){
    // if (l==r) return vector<long long>{};
    int m = (l+r)/2;
    if(l < r){
        mseo(nums,l,m);
        mseo(nums,m+1,r);
        merge(nums,l,m,r);
    }
}

void sortIt(vector<long long>& arr) {
    // code here.
    int n = arr.size(),c = 0;
    vector<long long> nums(arr.begin(),arr.end());
    mseo(nums,0,n-1);
    for (auto n:nums) arr[c++] = n;
}

int main(){
    vector<long long> t = {3,1,2,4,5,3,6};
    sortIt(t);
    for (auto n:t) cout << n  <<" ";
    cout << endl;
    return 0;
}