/*Given two axis-aligned rectangles rec1 and rec2, return true if they overlap, 
otherwise return false.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], x2 = rec1[2], y1 = rec1[1], y2 = rec1[3];
        int x3 = rec2[0], x4 = rec2[2], y3 = rec2[1], y4 = rec2[3];

        if ((x3 >= x2) || (x1 >= x4) || (y3 >= y2) || (y1 >= y4))
            return false;
        else
            return true;
    }
};