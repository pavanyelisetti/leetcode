class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        vector<int>hash(255,0);
        int ans=0;
        while(r<s.length() && l<s.length())
        {
            
            if(hash[(int)s[r]]==0)
            {
                hash[(int)s[r]]=1;
                r++;
            }
            else
            {
                ans=max(ans,r-l);
                while(s[l]!=s[r])
                {
                    hash[(int)s[l]]=0;
                    l++;
                }
                l++;
                r++;
            }
        }
        ans=max(ans,r-l);
        return ans;
        
    }
};