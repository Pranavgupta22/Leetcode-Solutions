class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                string temp="";
                while(i<s.size() && isdigit(s[i]))
                {
                   temp+=s[i];
                   i++;
                }
                ans.push_back(stoi(temp));
            }
            }
            for(int i=0;i<ans.size()-1;i++)
            {
                if(!(ans[i]<ans[i+1]))
                {
                    return false;
                }
            }
            return true;

    }
};
