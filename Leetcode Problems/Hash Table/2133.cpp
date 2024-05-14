//An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).
//Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> s;
        int n = matrix.size();
        for (const auto &e:matrix){
            for (const auto &a:e){
                s.insert(a);
            }
            if (s.size()!=n)
                return false;
            s.clear();
        }

        for (int r = 0; r < n; r++){
            for (int c = 0; c < n; c++){
                s.insert(matrix[c][r]);
            }
            if (s.size()!=n)
                return false;
            s.clear();
        }
        return true;
    }
};
