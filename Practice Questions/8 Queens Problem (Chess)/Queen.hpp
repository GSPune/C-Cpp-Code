// #ifndef MYHEADEFILE_H
// #define MYHEADEFILE_H
#include <bits/stdc++.h>
using namespace std;

class Queen{
    public:
        int row,column;
        Queen();
        //Can the Queen attack the given square?
        bool canAttack(int,int);
};
// #endif