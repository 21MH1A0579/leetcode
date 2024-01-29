class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
          int c=0;
        map<int,int>mp;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            if(sum==k)
            {
                c++;
            }
            int rem=sum-k;
            if(mp.find(rem)!=mp.end())
            {
                c+=mp[rem];
            }
            mp[sum]++;
        }
        return c;
    }
};