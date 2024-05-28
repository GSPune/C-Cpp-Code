#include "baseChange.hpp"

void baseChange::convertNumber(){
    int remainder = 0;
    while(n != 0){
        remainder = n % k;
        kbase.push_back(mapToChar(remainder));
        n \= k;
    }
}

char baseChange::mapToChar(int r){
    if (r < 10)
        return char(r);
    else
        return char(r+55);
}

void baseChange::print(){
    
}