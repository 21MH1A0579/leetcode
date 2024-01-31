class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>n/2)
            {
                return nums[i];
            }
        }
        // int k=nums.size()/2;
        // for(auto it:mp)
        // {
        //     if(it.second>k)
        //     {
        //         return it.first;
        //     }
        // }
        return 0;
    };

};