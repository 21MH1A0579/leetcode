class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int d=nums.size()-(k%nums.size());
        reverse(nums.begin(),nums.begin()+d);
        reverse(nums.begin()+d,nums.end());
        reverse(nums.begin(),nums.end());
    }
};