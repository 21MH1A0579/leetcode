class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long currSum=0, maxSum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(currSum<0) currSum=0;
            currSum+=nums[i];
            maxSum=max(maxSum,currSum);
        }
        int temp=*max_element(nums.begin(),nums.end());

    return (maxSum<0) ? temp : maxSum;
    }
};