class Solution {
public:
    string removeStars(string s) {
       vector<char> ans;
       string a;
       for (auto e:s){
        if(e!='*')
            ans.push_back(e);
        else
            ans.pop_back();        
       } 

       for (auto e:ans){
        a += e; 
       }
       return a;
    }
};
