class Solution {
public:
    bool isPalindrome(int x) {
    unsigned int r,s=0;
        int t=x;
        while(x!=0)
        {
            r=abs(x%10);
            s=s*10+r;
            x=abs(x/10);
        }
        if(t==s)
            return true;
        else return false;
    }
};
