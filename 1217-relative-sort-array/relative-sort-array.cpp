class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      map<int,int>mp;
      for(int i=0;i<arr1.size();i++)
      {
        mp[arr1[i]]++;
      }
      vector<int>res;
      for(int i=0;i<arr2.size();i++)
      {
        for(int j=0;j<mp[arr2[i]];j++)
        {
            res.push_back(arr2[i]);
        }
        mp[arr2[i]]=0;
      }
      for(auto it:mp)
      {
        if(it.second!=0)
        {
           for(int i=0;i<it.second;i++)
           {
            res.push_back(it.first);
           }
        }
      }
      return res;
    }
};