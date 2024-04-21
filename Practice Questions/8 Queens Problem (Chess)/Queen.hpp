#include <bits/stdc++.h>
using namespace std;

class Queen{
    int row,column;
    public:
        Queen();
        //Can the Queen attack the given square?
        bool canAttack(int,int);
};