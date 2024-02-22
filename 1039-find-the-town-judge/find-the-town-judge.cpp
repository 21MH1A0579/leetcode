class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if(n==1) return 1;
        map<int,int>mp;
        map<int,int>mp1;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
            mp1[trust[i][0]]++;
        }
        for(auto it:mp)
        {
            if(it.second==n-1 && mp1.find(it.first)==mp1.end()) return it.first;
        }
        return -1;
        
    }
};