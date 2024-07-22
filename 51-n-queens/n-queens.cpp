class Solution {
public:
    bool safe(int row,int col,vector<string>&board,int n)
    {
        int trow=row;
        int tcol=col;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;

            row++;
            col--;
        }
        row=trow;
        col=tcol;
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        col=tcol;
        while(row>=0 and col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
            row--;
        }
        return true;
        
    }
    void count(int row,int col,int n,vector<vector<string>>&ans,vector<string>&board)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(row=0;row<n;row++)
        {
            if(safe(row,col,board,n))
            {
                board[row][col]='Q';
                count(row,col+1,n,ans,board);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<board.size();i++)
        {
            board[i]=s;
        }
        vector<vector<string>>ans;
        count(0,0,n,ans,board);
        return ans;
        
    }
};