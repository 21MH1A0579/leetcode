class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    { 
        int n= nums.size();
        int a[n];
        int pos=0,neg=1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=0)
        {
            a[pos]=nums[i];
            pos+=2;
        }
        else
        {
            a[neg]=nums[i];
            neg+=2;
        }
    }
    vector<int>v(a,a+n);
    return v;
    
    }
};