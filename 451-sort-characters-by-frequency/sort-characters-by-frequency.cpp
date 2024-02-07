class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int>mp;
        multimap<int,char>ordmp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            ordmp.insert({it.second,it.first});
        }
        string ss="";
        for(auto it=ordmp.rbegin();it!=ordmp.rend();++it)
        {
            ss+=string(it->first,it->second);
        }
        
        return ss;
    }
};