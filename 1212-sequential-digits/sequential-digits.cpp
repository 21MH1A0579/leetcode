class Solution {
public:
    vector<int> sequentialDigits(int low, int high)
    {
    string a=to_string(low);
	string b=to_string(high);
	int n =a.size();
	int m =b.size();
	vector<int>v;
	string s="123456789";
	for(int i=0;i<=m-n;i++)
	{
		for(int j=0;j<s.size();j++)
		{
			if(s.substr(j,n+i).size()==n+i)
			{
			   if(stoi(s.substr(j,n+i))>=low && stoi(s.substr(j,n+i))<=high)
			   {
			   	 v.push_back(stoi(s.substr(j,n+i)));
			   }
		    }
		}
	}
      return v;
    }
};