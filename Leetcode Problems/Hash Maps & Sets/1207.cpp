class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m1;
        unordered_set<int> s;

        for (const auto &e:arr)
            m1[e]++;

        // for (const auto &e:m1)
        //     cout << e.first << "::" << e.second << endl;

        unordered_map <int,int>::iterator i;
        for (i = m1.begin();i!=m1.end();++i){
            s.insert(i->second);
        }

        // for (const auto &e:m1)
        //     s.insert(e.second);

        return (s.size() == m1.size());
    }
};