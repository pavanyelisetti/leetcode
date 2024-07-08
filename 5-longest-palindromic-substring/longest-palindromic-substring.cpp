class Solution {
public:
    string longestPalindrome(string s) {
        int ind,len=0;
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            while((l>=0 and r<s.length())&&(s[l]==s[r]))
            {
                if(len<r-l+1)
                {
                    ind=l;
                    len=r-l+1;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while((l>=0 and r<s.length())&&(s[l]==s[r]))
            {
                if(len<r-l+1)
                {
                    ind=l;
                    len=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(ind,len);
    }
};