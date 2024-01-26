class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int c=0,maxi=INT_MIN;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==1)
          {
              c++;
          }
          else
          {
              if(c>maxi)
              {
                  maxi=c;
              }
              c=0;
          }
      } 
      if(c>maxi)
        {
            maxi=c;
        }
      return maxi;  
    }
};