class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>&v, int k) 
    {
    unordered_map<int,int>mp;
	for(int i=0;i<v.size();i++)
	{
		mp[v[i]]++;
	}
	vector<int>cnt;
	for(auto it:mp)
	{
		cnt.push_back(it.second);
		cout<<it.first<<"->"<<it.second<<endl;
	}
	sort(cnt.begin(),cnt.end());
	int res=cnt.size();
	for(int i=0;i<cnt.size();i++)
	{
		if(k-cnt[i]>=0)
		{
			k-=cnt[i];
			res--;
		}
		else
		{
			break;
		}
	}
    return res;
    }
        
    
};