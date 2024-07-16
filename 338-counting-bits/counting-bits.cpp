class Solution {
public:
 int setbitcount(int n)
 {
     int c=0;
     while(n)
     {
         n=n&(n-1);
         c++;
     }
     return c;
 }
    vector<int> countBits(int n)
    {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(setbitcount(i));
        }
        return v;
    }
};