class Solution {
public:
    bool safe(int row,int col,char num,vector<vector<char>>&board)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==num)
            {
                return false;
            }
            if(board[i][col]==num)
            {
                return false;
            }
            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==num)
            {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(safe(i,j,c,board))
                        {
                            board[i][j]=c;
                        
                            if(solve(board)==true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j]='.';    
                            }  
                        }                  
                    } 
                    return false;
                }
                
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        
    }
};