class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int itr=nums.size()-k;
        for(auto it:mp)
        {
          if(it.second>itr)
          {
            return it.first;
          }else{
            itr-=it.second;
          }
             
            
        }
      return -1;
    }
};