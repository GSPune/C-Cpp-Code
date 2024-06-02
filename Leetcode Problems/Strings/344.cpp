//Write a function that reverses a string. The input string is given as an array of characters s.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int p = 0,q = s.size()-1;
        while(p < q){
            if (s[p] != s[q])
                swap(s[p],s[q]);
            p++;q--;
        }
    }
};
