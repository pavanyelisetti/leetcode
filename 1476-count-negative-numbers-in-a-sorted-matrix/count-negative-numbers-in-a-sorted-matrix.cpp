class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int row=0;
        int col=n-1;
        int c=0;
        while(row<m && col>=0)
        {
            if(grid[row][col]<0)
            {
                c+=(m-row);
                if(col>0 && grid[row][col-1]>0)
                {
                    row++;
                    col--;
                }
                else
                {
                    col--;
                }
            }
            else
            {
                row++;
            }
        }
        return c;
        
    }
};