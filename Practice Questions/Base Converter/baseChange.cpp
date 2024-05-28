#include "baseChange.hpp"


baseChange::baseChange(int n,int k){
    this->n = n;
    this->k = k;
}

void baseChange::convertNumber(){
    int remainder = 0;
    while(n != 0){
        remainder = n % k;
        kbase.push_back(mapToChar(remainder));
        n /= k;
    }
}

char baseChange::mapToChar(int r){
    if (r < 10){
        return char(r+48);
    }
    else
        //Convert ASCII Value to Corresponding Character Value
        return char(r+55);
}

void baseChange::print(){
    string::reverse_iterator iter = kbase.rbegin();
    // iter--;
    cout << "Output: " ;

    while (iter != kbase.rend()){
        cout << *(iter);
        iter++;
    }
    cout << endl;
}