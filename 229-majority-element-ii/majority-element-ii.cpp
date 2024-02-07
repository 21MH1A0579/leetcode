class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int k=n/3;
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second>k)
            {
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};