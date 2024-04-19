class Solution {
public:
     void DFS(int i,int j,int n, int m, vector<vector<char>>&grid,vector<vector<int>>&vis)
     {
         if(i<0 or j< 0 or i>n-1 or j>m-1 or grid[i][j]=='0' or vis[i][j])
         {
             return ;
         }
         vis[i][j]=1;
         DFS(i-1,j,n,m,grid,vis);
         DFS(i,j+1,n,m,grid,vis);
         DFS(i+1,j,n,m,grid,vis);
         DFS(i,j-1,n,m,grid,vis);
     }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int island=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' and vis[i][j]==0)
                {
                    DFS(i,j,n,m,grid,vis);
                    island++;
                }
            }
        }
        return island;
    }

};