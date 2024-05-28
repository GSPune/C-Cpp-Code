#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class baseChange{
    unsigned int n,k;
    string kbase;
    public:
        baseChange(int,int);
        void print();
        void convertNumber();
        char mapToChar(int);
};