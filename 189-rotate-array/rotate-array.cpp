class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
       vector<int>v;
       int r=k%n;
       for(int i=n-r;i<n;i++)
       {
           v.push_back(nums[i]);
       }
       nums.erase(nums.begin()+(n-r),nums.end());
       for(int i=0;i<v.size();i++)
       {
        nums.insert(nums.begin()+i,v[i]);
       }
    }
};