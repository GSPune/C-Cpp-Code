//B. Rudolf and the 121

// Rudolf can apply the given operation any number of times. Any index i
// can be used zero or more times.
// Can he make all the elements of the array equal to zero using this operation?
// a(i−1)=a(i−1)−1
// ai=ai−2
// a(i+1)=a(i+1)−1

#include <bits/stdc++.h>
using namespace std;

void operation(vector<int> A,int size){
    int op;
    for (int i = 0; i < size - 2; i++){
        op = A[i];
        if(op > 0){
            A[i] -= op;
            A[i+1] -= 2*op;
            A[i+2] -= op;
        }
    }

    for (auto &e:A){
        if (e != 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" <<endl;
}

int main(){
    int cases,n;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        //size of test case array
        cin >> n;
        vector<int> Input;
        int ip;
        for (int j = 0; j < n;j++){
            cin >> ip;Input.push_back(ip);
        }
        operation(Input,n);
    }

    return 0;
}