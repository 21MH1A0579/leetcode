class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
       vector<int>v;
       for(int i=n-(k%n);i<n;i++)
       {
           v.push_back(nums[i]);
       }
       nums.erase(nums.begin()+(n-(k%n)),nums.end());
       for(int i=0;i<v.size();i++)
       {
        nums.insert(nums.begin()+i,v[i]);
       }
    }
};