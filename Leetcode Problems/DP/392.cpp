class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sz1 = t.length();
        int sz2 = s.length();
        int i = 0, j = 0,count = 0;
        while (i < sz1 && j < sz2)
        {
            if (t[i] == s[j])
            {
                i++;
                j++;
                count++;
            }
            else
                i++;
        }

        return (count == sz2);
    }
};
