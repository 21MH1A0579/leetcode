class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       map<int,int>mp;
       vector<int>v;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
           int k=target-nums[i];
           if(mp.find(k)!=mp.end())
           {
               v.push_back(mp[k]);
               v.push_back(i);
           }
           mp[nums[i]]=i;
       } 
       return v;
    }
};