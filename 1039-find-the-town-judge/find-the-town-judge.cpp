class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int, int> mp;
        vector<int> arr(n, 0);
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
            arr[trust[i][0]-1]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0 &&mp[i+1]==n-1)
            {
                return i+1;
            }
        }
        return -1;

        return -1;
    }
};
