/*519. Random Flip Matrix*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lr = 0, lc = 0, rows, cols;
    Solution(int m, int n) {
        this->rows = m;
        cols = n;
        // reset();
    }

    vector<int> flip() {
        vector<int> indices;
        if (lc == (cols - 1)) {
            lr++;
            lc = 0;
        }
        //kinda reset
        else if(lr == (rows -1)){
            lc = lr = 0;
        }
        else {
            lc++;// will iterate over columns till we can
        }
        indices.push_back(lr);
        indices.push_back(lc);
        return indices;
    }

    void reset() {}
};

int main(){
    return 0;
}