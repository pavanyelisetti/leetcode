class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        vector<int>hash(255,-1);
        int ans=0;
        while(r<s.length() && l<s.length())
        {
            if(hash[(int)s[r]]!=-1)
            {
                if(l<=hash[(int)s[r]])l=hash[(int)s[r]]+1;   
            }
            ans=max(ans,r-l+1);
            hash[(int)s[r]]=r;
            r++;
        }
 
        return ans;
        
    }
};