/*Given the coordinates of two rectilinear rectangles in a 2D plane, 
return the total area covered by the two rectangles.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int totalArea = abs(ax2-ax1)*abs(ay2-ay1) + abs(bx2-bx1)*abs(by2-by1);
        if ((bx1 >= ax2) || (ax1 >= bx2) || (by1 >= ay2) || (ay1 >= by2))
            return totalArea;
        else
            return totalArea - (min(abs(ax2-bx1),abs(bx2-ax1)))*(min(abs(ay2-by1),abs(by2-ay1)));
    }
};