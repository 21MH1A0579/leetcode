class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int>pos;
        vector<int>neg;
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int i=0;i<n/2;i++)
        {
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};