class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       map<char,int> m1;
       map<char,int> m2;
       for(auto x:ransomNote)
       {
         m1[x]++;
       } 
        for(auto y:magazine)
       {
         m2[y]++;
       } 
       for(auto w:m1)
       {
           int k=w.second;
           int l=m2[w.first];
           if(!(l>=k))
           {
               return false;
           }
       }
       return true;
    }
};
