class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int ans=0,c=0,maxf;
        map<char,int>mpp;
        while(r<s.length())
        {
            mpp[s[r]]++;
            maxf=max(maxf,mpp[s[r]]);
            if((r-l+1)-maxf>k)
            {
                    mpp[s[l]]--;
                    maxf=0;
                    l++;
            }
            if((r-l+1)-maxf<=k)ans=max(r-l+1,maxf);
             r++;
        }
        
        return ans;
        
    }
};