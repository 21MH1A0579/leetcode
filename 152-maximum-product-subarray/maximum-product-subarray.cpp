class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int prd=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            prd=1;
            for(int j=i;j<nums.size();j++)
            {
              prd*=nums[j];
              ans=max(ans,prd);
            }
        }
        return ans;
        
    }
};