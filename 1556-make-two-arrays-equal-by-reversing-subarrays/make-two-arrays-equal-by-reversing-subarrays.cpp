class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       int n=arr.size();
      sort(arr.begin(),arr.end());
       sort(target.begin(),target.end());
      for(int i=0;i<n;i++)
      {
        if(target[i]!=arr[i]) return false;
      }
      return true;
    }
};