class Solution {
public:
    bool isprime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) 
    {
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++){
                if((i==j && isprime(nums[i][j])) || ((i+j==nums.size()-1) && isprime(nums[i][j]))){
                    maxi=max(maxi,nums[i][j]);
                }
            }
        }
        return maxi;
    }
};