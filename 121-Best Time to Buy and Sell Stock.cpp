class Solution {
public:
    int maxProfit(vector<int>& p) {
       int d=0;
       int f=INT_MAX;
       for(int i=0;i<p.size();i++)
       {
           d=max(d,p[i]-f);
           f=min(f,p[i]);
       } 
       return d;
    }
};
