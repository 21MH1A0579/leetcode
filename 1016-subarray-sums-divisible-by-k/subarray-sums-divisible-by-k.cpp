class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        map<int,int>mp;
        int n=nums.size();
        int c=0;
        int sum=0;
        //mp[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0)
            {
                c++;
            }
            if(rem<0)
            {
                rem=rem+k;
            }
            c+=mp[rem];
            mp[rem]++;
            
        }
        return c;
        
    }
};