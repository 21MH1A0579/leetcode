class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
         int min=INT_MAX;
         int max=0;
         for(int i=0;i<nums.size();i++){
            if(nums[i]<min)
            {
                min=nums[i];
            } if(nums[i]>max){
                max=nums[i];
            }
         }
         cout<<min<<max;
         for(int i=0;i<nums.size();i++){
            if(nums[i]!=min && nums[i]!=max){
                return nums[i];
            }
         }
         return -1;
    }
};