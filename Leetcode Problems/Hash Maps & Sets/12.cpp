//Integer to Roman

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string units[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrds[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thds[4] = {"","M","MM","MMM"};

        return thds[num/1000]+hrds[(num%1000)/100]+tens[(num%100)/10]+units[num%10];
    }
};