class Solution {
public:
    bool solve(int ind,int row,int col,vector<vector<char>>& board, string word,vector<vector<int>>&visited)
    {
         if(ind==word.length()-1)
        {
            if(visited[row][col]==0 and board[row][col]==word[ind])  return true;
            return false;
        }
        int i=row,j=col;
        
                if(board[i][j]==word[ind] && visited[i][j]==0 )
                {
                     visited[i][j]=1;
                      
                        if (col < board[0].size() - 1 && solve(ind + 1, row, col + 1, board, word, visited)) 
                        {
                            return true;
                        }
                        if (row < board.size() - 1 && solve(ind + 1, row + 1, col, board, word, visited))
                        {
                            return true;
                        }
                        if (row > 0 && solve(ind + 1, row - 1, col, board, word, visited)) 
                        {
                            return true;
                        }
                        if (col > 0 && solve(ind + 1, row, col - 1, board, word, visited)) 
                        {
                            return true;
                        }
                        
                        visited[i][j]=0;
                        return false;
                }
                 
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        string temp;
        vector<vector<int>>visited(board.size(), vector<int>(board[0].size()));
        if(word.size()>board.size()*board[0].size())return false;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                visited[i][j]=0;
            }
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    if(solve(0,i,j,board,word,visited)==true)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
        
    }
};