class Solution {
public:
std::array<int,256> hash(string s)
{
    std::array<int,256> hash ={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    return hash;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<std::array<int,256>,vector<string>> m;
        vector<vector<string>> ans;
        for(auto str:strs)
        {
            m[hash(str)].push_back(str);
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;

    }
};
