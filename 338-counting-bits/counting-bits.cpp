class Solution {
public:
 int setbitcount(int n)
 {
     int c=0;
    while(n){
        if(n&1>=1){
            c++;
        }
        n>>=1;
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