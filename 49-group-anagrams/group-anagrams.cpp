class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&s ) 
    {
        map<string,vector<string>>mp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            string temp=s[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s[i]);
            
        }
        vector<vector<string>>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
    }
};