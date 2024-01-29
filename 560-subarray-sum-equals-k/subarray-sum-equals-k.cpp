class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int presum[n];
        int c=0;
        presum[0]=nums[0];
        map<int,int>mp;
        for(int i=1;i<n;i++)
        {
            presum[i]=nums[i]+presum[i-1];
        }
        for(int j=0;j<n;j++)
        {
            if(presum[j]==k)
            {
                c++;
            }
            int rem=presum[j]-k;
            if(mp.find(rem)!=mp.end())
            {
                c+=mp[rem];
            }
            mp[presum[j]]++;
        }
        return c;
    }
};