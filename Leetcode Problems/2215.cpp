// Find the difference of 2 arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1,s2;
        for(const auto &e:nums1){
            s1.insert(e);
        }

        for(const auto &e:nums2){
            s2.insert(e);
        }

        vector<int> v1,v2;
        for (const auto &e:s1)
        {
            if (s2.find(e) == s2.end()){
                v1.push_back(e);
            }
        }

        for (const auto &e:s2)
        {
            if (s1.find(e) == s1.end()){
                v2.push_back(e);
            }
        }

        vector<vector<int>> Ans;
        Ans.push_back(v1);
        Ans.push_back(v2);
        return Ans;
    }
};
