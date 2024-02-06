class Solution {
public:
    int firstUniqChar(string s) 
    {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int first=s.find(s[i]);
            int last=s.find_last_of(s[i]);
            if(first==last)
            {
                return first;
            }
        }
        return -1;
        
  }
};