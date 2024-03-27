class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        int sz1 = s.length(), i = 0;
        if (sz1 != t.length())
            return false;
        for (const auto& e : s) {
            unordered_map<char, char>::iterator got = m.find(e);
            if (got == m.end()) {
                m[e] = t[i];
                i++;
            } 
            else {
                if (got->second != t[i]) {
                    return false;
                }
                i++;
            }
        }
        return true;
    }
};
