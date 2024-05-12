#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0,p2 = height.size() - 1;
        int max_area = 0;
        int min_height = min(height[p1],height[p2]);
        max_area = (p2-p1) * min_height;
        while(p1 < p2)
        { 
            if (min_height == height[p1])
                p1++;
            else
                p2--;
            min_height = min(height[p1],height[p2]);
            max_area = max(max_area,(p2-p1) * min_height);
        }
        return max_area;
    }
};
