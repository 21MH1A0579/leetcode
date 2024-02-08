class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k,sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=nums[i];
            if(nums[i]==nums[i+1])
            {
                k=nums[i];
                
            }
        }
        sum+=nums[n-1];
        int z=(n*(n+1))/2;
        vector<int>res;
        res.push_back(k);
        res.push_back(k+(z-sum));
        return res;
    }
};