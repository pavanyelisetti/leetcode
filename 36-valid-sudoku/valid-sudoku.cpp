class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int>mp;
        map<int,int>mp1;
        bool b[9][9]={false};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1)
                    {
                        return false;
                    }  
                    if(b[3*(i/3)+(j/3)][board[i][j]-'0'-1]==true)
                    {
                        return false;
                    }   
                    b[3*(i/3)+(j/3)][board[i][j]-'0'-1]=true;
                }
                if(board[j][i]!='.')
                {
                        mp1[board[j][i]]++;
                        if(mp1[board[j][i]]>1)
                        { 
                            return false;
                        }
                }
            }
            mp.clear();
            mp1.clear();
        }
        return true;
    }
};