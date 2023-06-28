class Solution {
public:
    int reverse(int x) 
    { int s=0;
        while(x)
        {
           int r=x%10;
            if((s>(INT_MAX/10))||(s<(INT_MIN/10)))
            {
                return 0;
                break;
            }
           s=s*10+r;
            x=x/10;
        }
        return s;
    }
};
