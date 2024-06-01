class Solution {
public:
    int scoreOfString(string s) {
        int sc = 0;
        for (int i = 0; i < s.size(); i++){
            cout << int(s[i]);
            if (i != s.size()-1)
                sc += abs(int(s[i]) - int(s[i+1]));
        }
        return sc;
    }
};
