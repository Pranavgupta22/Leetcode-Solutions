class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) {
        map<char,int> m1;
        map<char,int> m2;
        int l=0;
        for(int i=0;i<w1.size();i++)
        {
            m1[w1[i]]++;
        }
        for(int i=0;i<w2.size();i++)
        {
            m2[w2[i]]++;
        }
        for( auto x1:m1)
        {
            char ch=x1.first;
            if(abs(m2[ch]-x1.second)>3)
            {
             return false;
            }
        }
       for( auto x2:m2)
        {
            char ch=x2.first;
            if(abs(m1[ch]-x2.second)>3)
            {
             return false;
            }
        }
        return true;
    }
};
