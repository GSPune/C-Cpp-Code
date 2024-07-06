/*48. Rotate Image*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i > j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }

        int p1 = 0, p2 = n - 1;
        // reverse the cols
        while (p1 < p2) {
            // swap cols p1 and p2
            for (int k = 0; k < n; ++k) {
                swap(matrix[k][p1], matrix[k][p2]);
            }
            p1++;
            p2--;
        }
    }
};