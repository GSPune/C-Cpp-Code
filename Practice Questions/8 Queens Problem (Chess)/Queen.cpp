#include <bits/stdc++.h>
#include "Queen.hpp"
using namespace std;

Queen::Queen(){
    row = column = -1;
}

bool Queen::canAttack(int r,int c){
    if (r == row || c == column || abs(row - r) == abs (column - c))
        return true;
    return false;
}

