/*Given the coordinates of two rectilinear rectangles in a 2D plane, 
return the total area covered by the two rectangles.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = abs(ax2 - ax1) * abs(ay2 - ay1);
        int area2 = abs(bx2 - bx1) * abs(by2 - by1);
        int totalArea = area1 + area2;
        // if (area1 == 0 || area2 == 0)
        //     return totalArea;

        //calculating overlaping area
        int o1 = max(ax1,bx1), o2 = min(ax2,bx2);
        int o3 = max(ay1,by1), o4 = min(ay2,by2);

        if ((bx1 >= ax2) || (ax1 >= bx2) || (by1 >= ay2) || (ay1 >= by2))
            return totalArea;
        else
            return totalArea - (abs(o2 - o1) * abs (o4 - o3));
    }
};