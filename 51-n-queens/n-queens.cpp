class Solution {
public:
int safe(int row,int col,vector<string>board,int n)
{
    int drow=row;
    int  dcol=col;
    while(row>=0 && col>=0)
    {
        if(board[row][col]=='Q')return 0;
        row--;
        col--;
    }
    row=drow;
    col=dcol;
    while(col>=0)
    {
        if(board[row][col]=='Q')return 0;
        col--;
    }
    row=drow;
    col=dcol;
    while(row<n && col>=0)
    {
        if(board[row][col]=='Q')return 0;
        row++;
        col--;
    }
    return 1;
}
    void solve(int col,int n,vector<string>&board,vector<vector<string>>&ans)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(safe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,n,board,ans);
        return ans;
    }
};