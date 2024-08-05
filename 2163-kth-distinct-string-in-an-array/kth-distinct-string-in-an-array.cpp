class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
     map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]]==1)
            {
                if(k==1) return arr[i];
                else k--;
            }
        
        }
        return "";
    }
};