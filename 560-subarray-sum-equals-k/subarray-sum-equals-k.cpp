class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> x;
        int sum=0;
        x[0]=1;
        int res=0;
        for(int i=0;i<nums.size();i++){
             sum+=nums[i];
             if(x.find(sum-k)!=x.end()){
                 res+=x[sum-k];
             }
             x[sum]++;
        }

    return res;
    }
};