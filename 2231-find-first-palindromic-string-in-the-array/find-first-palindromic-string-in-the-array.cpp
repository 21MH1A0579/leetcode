class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            int k=words[i].size();
            int f=0;
            for(int j=0;j<k/2;j++)
            {
                if(words[i][j]!=words[i][k-j-1])
                {
                    f=1;
                    break;
                }
                else
                {
                    f=0;
                }
            }
            if(f==0)
            {
                return words[i];
            }
        }
        return "";
    }
};