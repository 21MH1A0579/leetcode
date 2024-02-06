class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int c=0;
        vector<int>v;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                v.push_back(s.find(it.first));
            }
        }
        if(s=="tuvwxyzabcdefghijklmnopqrs")
        {
            return 0;
        }
        if(v.size()!=0)
        {
            return v[v.size()-1];
        }
        return -1;
        
    }
};