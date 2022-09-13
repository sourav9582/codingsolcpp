class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        // int n=grid.size();
        // int ans=0;
        // vector<int> rowmax(n);
        // vector<int> colmax(n);
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         rowmax[i]=max(rowmax[i],grid[i][j]);
        //         colmax[i]=max(colmax[j],grid[i][j]);
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         ans+=min(rowmax[i],colmax[j])-grid[i][j];
        //     }
        // }
        // return ans;
        int n=grid.size(),ans=0;
        vector<int> row(n),col(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                row[i]=max(row[i],grid[i][j]);
                col[j]=max(col[j],grid[i][j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans+=min(row[i],col[j])-grid[i][j];
            }
        }
        return ans;
    }
};