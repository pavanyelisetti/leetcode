class Solution {
public:
    int ans;
    bool safe(int row,int col,vector<string>&board,int n)
    {
        int trow=row;
        int tcol=col;
        while(col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
        }
        col=tcol;
        while(row>=0 and col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row--;
            col--;
        }
        row=trow;
        col=tcol;
        while(row<n && col>=0)
        {
          if(board[row][col]=='Q')
            {
                return false;
            }   
            row++;
            col--;
        }
        return true;
    }
    void count(int row,int col,vector<string>&board,int n)
    {
        if(col==n)
        {
            ans+=1;
            return ;
        }
        for(int row=0;row<n;row++)
        {
            if(safe(row,col,board,n)==true)
            {
                board[row][col]='Q';
                count(row,col+1,board,n);
                board[row][col]='.';
            }
        }
    } 
    int totalNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        count(0,0,board,n);
        return ans;
        
    }
};