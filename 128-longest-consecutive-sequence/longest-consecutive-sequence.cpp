class Solution {
public:
    int longestConsecutive(vector<int>& a) 
    {
         sort(a.begin(),a.end());
    int n=a.size();
    if(n==0) return 0;
    int cnt=0;
    int maxi=0; 
    for(int i=0;i<n-1;i++)
    {
        if(a[i]+1==a[i+1])
        {
          
            cnt++;

        }
        else if(a[i]==a[i+1])
        {
          
        }
        else
        {
            maxi=max(cnt+1,maxi);
            cnt=0;
        }
        
    }
    maxi=max(cnt+1,maxi);
        return maxi;
    }
};