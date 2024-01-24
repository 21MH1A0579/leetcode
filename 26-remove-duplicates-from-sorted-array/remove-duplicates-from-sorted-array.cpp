class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
     set<int>s;
     s.insert(nums.begin(),nums.end());
     nums.clear();
     for(auto it:s)
     {
         nums.push_back(it);
     }
      return s.size();
    }
};