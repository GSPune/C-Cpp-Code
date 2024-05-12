//1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0, alt = 0;
        for (int i = 0; i < gain.size(); i++){
            alt = gain[i] + alt;
            if (alt > max)
                max =  alt;
        }
    return max;
    }
};
