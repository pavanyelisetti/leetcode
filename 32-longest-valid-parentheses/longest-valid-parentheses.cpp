class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int c=0;
        
            string s1;
            for(int j=i;j<s.length();j++)
            {
                s1+=s[j];
                if(s[j]=='(')
                {
                    c++;
                }
                if(s[j]==')')
                {
                    c--;
                }
                if(c<0)
                {
                    break;
                }
                if(c==0)
                {
                    ans=max(ans,j-i+1);
                }
    
            }
        }
        return ans;
        
    }
};