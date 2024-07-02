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
        lc++;
        if(lc == cols){
            lc = 0;
            lr++;
        } 
        if(lr == rows){
            lc = lr = 0;
        }      
        indices.push_back(lr);
        indices.push_back(lc);
        return indices;
    }

    void reset() {
        //When reset is called we will not alter the iterators so probability will remain eqally likeable.
    }
};

int main(){
    Solution *obj = new Solution(3,1);
    vector<int> param_1 = obj->flip();
    for(auto &e:param_1) cout << e << " ";
    vector<int> param_2 = obj->flip();
    for(auto &e:param_2) cout << e << " ";
    vector<int> param_3 = obj->flip();
    for(auto &e:param_3) cout << e << " ";
    vector<int> param_4 = obj->flip();
    for(auto &e:param_4) cout << e << " ";
    return 0;
}