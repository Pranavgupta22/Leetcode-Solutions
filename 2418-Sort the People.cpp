class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string> m;
        vector<string> ans;
        for(int i=0;i<h.size();i++)
        {
            m[h[i]]=n[i];
        }
        sort(h.begin(),h.end());
         reverse(h.begin(),h.end());
        for(int i=0;i<h.size();i++)
        {
           ans.push_back(m[h[i]]); 
        }
        return ans;
    }
};
