class Solution {
public:
    int secondlargest(vector<int>&digits , int n)
    {
        int largest=digits[0];
        int slargest=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(digits[i]>largest)
            {
                slargest=largest;
                largest=digits[i];
            }
            else if(digits[i]<largest && digits[i]>slargest)
            {
                slargest=digits[i];
            }
        }
        if(slargest==INT_MIN) return -1;
        return slargest;
    }
    int secondHighest(string s) 
    {
        int n=s.size();
        vector<int>digits;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int temp=s[i]-'0';
                digits.push_back(temp);
            }
        }
        if(digits.size()<=1)
        {
            return -1;
            digits.push_back(-1);
        }
        return secondlargest(digits,digits.size());
    }
};