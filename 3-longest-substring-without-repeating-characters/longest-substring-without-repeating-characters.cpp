class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=0;
       int r=0;
       int ans=0;
       vector<int>v(255,0);
       while(r<s.size())
       {
            if(v[(int)s[r]]==0)
            {
                v[(int)s[r]]=1;
                ans=max(ans,r-l+1);
                r++;
            }
            else
            {
                while(s[l]!=s[r])
                {
                    v[(int)s[l]]=0;
                    l++;
                }
                l++;
                r++;
            }
       }  
       return ans;

    }
};