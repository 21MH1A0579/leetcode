class Solution {
public:
void reverse(vector<char>&s,int i,int j)
{
    if(i>=j) return;
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    reverse(s,i+1,j-1);
}
    void reverseString(vector<char>& s) {
        int n=s.size();
        reverse(s,0,n-1);
    }
};