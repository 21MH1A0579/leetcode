class Solution {
public:
vector<int> generateRow(int row)
{
    vector<int>ansRow;
    ansRow.push_back(1);
    int ans=1;
    for(int col=1;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(generateRow(i));
        }
        return ans;
        
    }
};